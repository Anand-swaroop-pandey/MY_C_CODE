#include <stdio.h>
int main()
{
    int n,m;
    printf("Enter the size of array 1:\n");
    scanf("%d",&n);
    int arr1[n];
    printf("Enter the size of the array 2:\n");
    scanf("%d",&m);
    int arr2[m];
    printf("Enter %d elements of Array 1:\n",n);
    for(int i=0; i<n; i++)
        scanf("%d",&arr1[i]);
    printf("Enter %d elements of Array 2:\n",m);
    for(int i=0; i<m; i++)
        scanf("%d",&arr2[i]);
    merge_unsorted_arrays(arr1,arr2,n,m);
    return 0;
}
void merge_unsorted_arrays(int arr1[],int arr2[],int n,int m)
{
    int j=0;
    int arr3[n+m];
    for(int i=0; i<n; i++)
        arr3[j++]=arr1[i];
    for(int i=0; i<m; i++)
        arr3[j++]=arr2[i];
    printf("merged sorted array is:\n");
    for(int i=0; i<(n+m); i++)
        printf("%d\n",arr3[i]);
}