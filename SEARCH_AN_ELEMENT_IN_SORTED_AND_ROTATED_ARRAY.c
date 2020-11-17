#include <stdio.h>
int main()
{
    int n,key;
    printf("Enter the size of the Array:\n");
    scanf("%d",&n);
    int arr[n];
    printf("Enter sorted And Rotated Array:\n");
    printf("Enter %d elements\n",n);
    for(int i=0; i<n; i++)
        scanf("%d",&arr[i]);
    printf("Enter Key:\n");
    scanf("%d",&key);
    int index=search_rotated_array(arr,n,key);
    if(index==-1)
        printf("%d  doesnot Exist in the Array:\n",key);
    else
        printf("%d is found at index %d in the Array:\n",key,index);
    return 0;
}
int search_rotated_array(int arr[],int n,int key)
{
    int pivot_index=Find_pivot(arr,n);
    int index;
    if(pivot_index==-1)
        index=binary_search(arr,0,(n-1),key);
    else
    {
        if(key>=arr[0])
            index= binary_search(arr,0,pivot_index-1,key);
        else
            index= binary_search(arr,pivot_index,n-1,key);
    }
    return index;
}
int Find_pivot(int arr[],int n)
{
    int low=0,high=n-1;
    if(low==high)
        return -1;//Only single Element exists
    if(arr[low] < arr[high])
        return -1;//array is completely sorted
    while(low<high)
    {
        int mid = (low+high)/2;
        if(arr[mid]>arr[mid+1])
            return mid+1;
        else if(arr[low]>arr[mid])
            high = mid;
        else if(arr[low]< arr[mid])
            low= mid+1;
    }
}
int binary_search(int arr[],int low,int high,int key)
{
    if(low>high)
        return -1;
    int mid=(low+high)/2;
    if(arr[mid]==key)
        return mid;
    else if(arr[mid]<key)
        return binary_search(arr,mid+1,high,key);
    else if(arr[mid]>key)
        return binary_search(arr,low,mid-1,key);
}