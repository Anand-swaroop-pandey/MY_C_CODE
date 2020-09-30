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
    printf("Enter %d elements of array 2:\n",m);
    for(int i=0; i<m; i++)
        scanf("%d",&arr2[i]);
    union_arrays(arr1,arr2,n,m);
    return 0;
}
void union_arrays(int arr1[],int arr2[],int n,int m)
{
    int len=n+m,k=0,i;
    int union_arr[len];
    for(i=0; i<n-1; i++)
        if(arr1[i]!=arr1[i+1])
            union_arr[k++]=arr1[i];
    if(i==(n-1))
        union_arr[k++]=arr1[i];
    for(i=0; i<m-1; i++)
        if(arr2[i]!=arr2[i+1])
            if(binary_search(arr2[i],arr1,n)==0)
                union_arr[k++]=arr2[i];
    if(i==(m-1))
        if(binary_search(arr2[i],arr1,n)==0)
            union_arr[k++]=arr2[i];
    printf("Union of given Two sorted Arrays is:\n");
    insertion_sort(union_arr,k);
    for(int i=0; i<k; i++)
        printf("%d\n",union_arr[i]);
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