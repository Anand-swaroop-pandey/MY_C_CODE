#include<stdio.h>
int main()
{
    int n;
    printf("Enter the size of the Array:\n");
    scanf("%d",&n);
    int arr[n];
    printf("Enter %d Elements:\n",n);
    for(int i=0; i<n; i++)
        scanf("%d",&arr[i]);
    find_Pairs(arr,n);
    return 0;
}
void find_Pairs(int arr[], int n)
{
    int count_even = 0, count_odd = 0;
    for(int i = 0; i < n; i++)
        if(arr[i] % 2 == 0)
            count_even++;
        else
            count_odd++;
    int evenPairs=(count_even*(count_even-1))/2+(count_odd*(count_odd-1))/2;
    int  oddPairs = (count_even*count_odd);
    printf("Number of Pairs with Even sum is:%d\n",evenPairs);
    printf("Number of Pairs with Odd sum is:%d\n",oddPairs);
}