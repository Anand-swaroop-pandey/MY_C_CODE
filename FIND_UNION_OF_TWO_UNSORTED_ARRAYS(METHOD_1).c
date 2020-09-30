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
    union_arrays(arr1,arr2,n,m);
    return 0;
}
void union_arrays(int arr1[],int arr2[],int n,int m)
{
    int i,k=0;
    int len=n+m;
    int union_arr[len];
    for(i=0; i<n; i++)
        union_arr[k++]=arr1[i];
    for(i=0; i<m; i++)
        if(linear_search(arr2[i],arr1,n)==0)
            union_arr[k++]=arr2[i];
    insertion_sort(union_arr,k);
    int count=0;
    for(int i=0; i<k; i++)
        if(union_arr[i]!=union_arr[i+1])
            union_arr[count++]=union_arr[i];
    printf("Union is:\n");
    for(i=0; i<count; i++)
        printf("%d ",union_arr[i]);
}
int linear_search(int key,int arr[],int n)
{
    for(int i=0; i<n; i++)
        if(arr[i]==key)
            return -1;
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