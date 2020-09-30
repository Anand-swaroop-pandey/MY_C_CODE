#include <stdio.h>
int main()
{
    int n,m;
    printf("Enter size of Array1\n");
    scanf("%d",&n);
    int arr1[n];
    printf("Enter a sorted array1:\n");
    printf("Enter %d element of array 1\n",n);
    for(int i=0; i<n; i++)
        scanf("%d",&arr1[i]);
    printf("Enter size of Array2\n");
    scanf("%d",&m);
    int arr2[m];
    printf("Enter a sorted array2:\n");
    printf("Enter %d element of array 2\n",m);
    for(int i=0; i<m; i++)
        scanf("%d",&arr2[i]);
    median_sorted_arrays(arr1,arr2,n,m);
}
void  median_sorted_arrays(int arr1[],int arr2[],int n,int m)
{
    float median;
    int len=n+m,arr3[len];
    merge_sorted(arr1,arr2,arr3,n,m);
    if(len % 2 !=0)
        median= arr3[len/2];
    else
        median= arr3[len/2]+arr3[(len-1)/2]/(float)2;
    printf("Median is:%0.2f",median);
}
void merge_sorted(int arr1[],int arr2[],int arr3[],int n,int m)
{
    int i=0, j=0,k=0;
    while(i<n && j<m)
    {
        if(arr1[i]<=arr2[j])
            arr3[k++]=arr1[i++];
        else if(arr2[j]<arr1[i])
            arr3[k++]=arr2[j++];
    }
    while(i<n)
        arr3[k++]=arr1[i++];
    while(j<m)
        arr3[k++]=arr2[j++];
}
