//two arrays are said to be disjoint if they have no element in common
//arr1[]={1,2,3,4,5} and arr2[]={6,7,8,9,10} are disjoint because theh have no common element
#include <stdio.h>
int main()
{
    int n,m;
    printf("Enter the size of Array1:\n");
    scanf("%d",&n);
    int arr1[n];
    printf("Enter %d element:\n",n);
    for(int i=0; i<n; i++)
        scanf("%d",&arr1[i]);
    printf("Enter the size of Array2:\n");
    scanf("%d",&m);
    int arr2[m];
    printf("Enter %d element:\n",m);
    for(int i=0; i<m; i++)
        scanf("%d",&arr2[i]);
    int result= disjoint(arr1,arr2,n,m);
    if(result==0)
        printf("Arrays are disjoint\n");
    else
        printf("Arrays are not disjoint\n");
    return 0;
}
int disjoint(int arr1[],int arr2[],int n,int m)
{
    if(n<=m)
    {
        insertion_sort(arr1,n);
        for(int i=0; i<m; i++)
            if(binary_search(arr2[i],arr1,n)==-1)
                return -1;
    }
    else
    {
        insertion_sort(arr2,m);
        for(int i=0; i<n; i++)
            if(binary_search(arr1[i],arr2,m)==-1)
                return -1;
    }
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
int binary_search(int key,int arr[],int size)
{
    int low=0,high=size-1;
    while(low<=high)
    {
        int mid=(low+high)/2;
        if(arr[mid]==key)
            return -1;
        else if(arr[mid]>key)
            high=mid-1;
        else if(arr[mid]<key)
            low=mid+1;
    }
    return 0;
}