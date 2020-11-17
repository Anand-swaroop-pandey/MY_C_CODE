#include <stdio.h>
int main()
{
    int n;
    printf("Enter the size of the array:\n");
    scanf("%d",&n);
    int arr[n];
    printf("Enter %d elements:\n",n);
    for(int i=0; i<n; i++)
        scanf("%d",&arr[i]);
    int min=minimum_in_sorted_rotated(arr,n);
    printf("Minimum element in the given sorted rotated array is %d",min);
    return 0;
}
int minimum_in_sorted_rotated(int arr[],int n)
{
    int pivot_index=find_pivot(arr,n);
    if(pivot_index==-1)
        return arr[0];
    else
        return arr[pivot_index];
}
int find_pivot(int arr[],int n)
{
    int low=0,high=(n-1);
    if(low==high)
        return -1;
    if(arr[low]<arr[high])
        return -1;
    while(low<high)
    {
        int mid=(low+high)/2;
        if(arr[mid]>arr[mid+1])
            return mid+1;
        else if(arr[low]>arr[mid])
            high=mid;
        else if(arr[low]<arr[mid])
            low=mid+1;
    }
}
