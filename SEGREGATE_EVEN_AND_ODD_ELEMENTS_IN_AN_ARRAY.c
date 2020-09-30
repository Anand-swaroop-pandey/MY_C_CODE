#include<stdio.h>
void swap(int *, int *);
void segregateEvenOdd(int arr[], int size)
{
    int left = 0, right = size-1;
    while(left < right)
    {
        while(arr[left]%2 == 0)//iterate tii number is even, terminate when number gets Odd.
            left++;
        while(arr[right]%2!=0)//iterate tii number is odd ,terminate when number gets even.
            right--;
        if(left < right)
        {
            swap(&arr[left], &arr[right]);
            left++;
            right--;
        }
    }
}
void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}
int main()
{
    int arr[100],n;
    printf("How many elements Do you want ?\n");
    scanf("%d",&n);
    printf("Enter %d elements :\n",n);
    for(int i=0; i<n; i++)
        scanf("%d",&arr[i]);
    segregateEvenOdd(arr,n);
    printf("Array after segregation:\n");
    for(int i = 0; i < n; i++)
        printf("%d ", arr[i]);
    return 0;
}