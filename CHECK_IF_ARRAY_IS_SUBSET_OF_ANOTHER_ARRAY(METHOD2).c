#include <stdio.h>
int main()
{
    int n,m;
    printf("Enter the size of the array:\n");
    scanf("%d",&n);
    int arr[n];
    printf("Enter %d elements\n",n);
    for(int i=0; i<n; i++)
        scanf("%d",&arr[i]);
    printf("Enter the size of size of array which is to be checked for a subset\n");
    scanf("%d",&m);
    int sub[m];
    printf("Enter %d elements:\n",m);
    for(int i=0; i<m; i++)
        scanf("%d",&sub[i]);
    int result=check_subset(arr,sub,n,m);
    if(result==-1)
        printf("Not a subset:\n");
    else
        printf("It is a subset:\n");
    return 0;
}
int check_subset(int arr1[],int arr2[],int n,int m)
{
    insertion_sort(arr1,n);
    for(int i=0; i<m; i++)
        if(binary_search(arr2[i],arr1,n)==-1)
            return -1;
    return 0;
}
void insertion_sort(int arr[],int size)
{
    for(int i=1; i<size; i++)
    {
        int temp=arr[i];
        int j=i-1;
        while(arr[j]>temp && j>=0)
        {
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=temp;
    }
}
int binary_search(int key,int arr[],int n)
{
    int low=0,high=n-1;
    while(low<=high)
    {
        int mid=(low+high)/2;
        if(arr[mid]==key)
            return 0;
        else if(arr[mid]>key)
            high=mid-1;
        else if(arr[mid]<key)
            low=mid+1;
    }
    return -1;
}