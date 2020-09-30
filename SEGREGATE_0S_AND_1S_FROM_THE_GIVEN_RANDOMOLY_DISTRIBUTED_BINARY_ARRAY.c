#include<stdio.h>
void swap(int *, int *);
void segregate_0s_and_1s(int arr[], int size)
{
    int left = 0, right = size-1;
    while(left < right)
    {
        while(arr[left]== 0)//iterate tii number is 0, terminate when number gets 1.
            left++;
        while(arr[right]==1)//iterate tii number is 1 ,terminate when number gets 0.
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
    segregate_0s_and_1s(arr,n);
    printf("Array after segregation:\n");
    for(int i = 0; i < n; i++)
        printf("%d ", arr[i]);
    return 0;
}