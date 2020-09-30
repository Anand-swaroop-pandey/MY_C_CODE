#include <stdio.h>
int main()
{
    int n,m;
    printf("Enter the size of the array 1:\n");
    scanf("%d",&n);
    int arr1[n];
    printf("Enter %d elements of array 1:\n",n);
    for(int i=0; i<n; i++)
        scanf("%d",&arr1[i]);
    printf("Enter the size of the array 2:\n");
    scanf("%d",&m);
    int arr2[m];
    printf("Enter %d elements of array 2:\n",n);
    for(int i=0; i<m; i++)
        scanf("%d",&arr2[i]);
    if(n<=m)
    {
        insertion_sort(arr1,n);
        union_arrays(arr1,arr2,n,m);
    }
    
    else
    {
        insertion_sort(arr2,m);
        union_arrays(arr2,arr1,m,n);
    }
    return 0;
}
void union_arrays(int small[],int big[],int len_small,int len_big)
{
    int i,k=0;
    int len=len_small+len_big;
    int union_arr[len];
    for(i=0; i<len_small-1; i++)
        if(small[i]!=small[i+1])
            union_arr[k++]=small[i];
    if(i==(len_small-1))
        union_arr[k++]=small[i];
    for(i=0; i<len_big; i++)
        if(binary_search(big[i],small,len_small)==0)
            union_arr[k++]=big[i];
    printf("Union is:\n");
    for(i=0; i<k; i++)
        printf("%d ",union_arr[i]);
}
int binary_search(int key,int arr[],int n)
{
    int low=0,high=n-1;
    while(low<=high)
    {
        int mid=(low+high)/2;
        if(arr[mid]==key)
            return -1;
        else if(arr[mid]<key)
            low=mid+1;
        else if(arr[mid]>key)
            high=mid-1;
    }
    return 0;
}
void insertion_sort(int arr[],int n)
{
    for(int i=1; i<n; i++)
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