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
    int count_even_sum_pairs=0,count_odd_sum_pairs=0;
    for(int i = 0; i < n; i++)
        for(int j=i+1; j<n; j++)
            if((arr[i]+arr[j])%2==0)
                count_even_sum_pairs++;
            else
                count_odd_sum_pairs++;
    printf("Number of Pairs with Even sum is:%d\n", count_even_sum_pairs);
    printf("Number of Pairs with Odd sum is:%d\n", count_odd_sum_pairs);
}