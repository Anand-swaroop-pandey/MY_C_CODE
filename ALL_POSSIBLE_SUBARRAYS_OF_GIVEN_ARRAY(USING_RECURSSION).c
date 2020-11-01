#include<stdio.h>
int main()
{
    int n;
    printf("Enter tne size of the array:\n");
    scanf("%d",&n);
    int arr[n];
    printf("Enter %d elements:\n",n);
    for(int i=0; i<n; i++)
        scanf("%d",&arr[i]);
    printf("All subarrays are:\n");
    All_subarrays(arr,n,0,0);
    return 0;
}
void  All_subarrays(int arr[],int arr_size,int start,int end)
{
    if(end==arr_size)
        return;
    else if(start > end)
        All_subarrays(arr, arr_size,0, end + 1);
    else
    {
        printf("[ ");
        for(int i = start; i<=end; i++)
            printf("%d, ",arr[i]);
        printf(" ]\n");
        All_subarrays(arr, arr_size,start + 1, end);
    }
}