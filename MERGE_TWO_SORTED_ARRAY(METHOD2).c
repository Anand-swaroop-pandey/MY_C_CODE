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
        scanf("%d",arr2[i]);
    merge_sorted_arrays(arr1,arr2,n,m);
}
void  merge_sorted_arrays(int arr1[],int arr2[],int n,int m)
{
    int i=0, j=0,k=0,len=n+m,arr3[len];
    if(arr1[i]<arr2[j])
        arr3[k++]=arr1[i++];
    else if(arr2[j]<arr1[i])
        arr3[k++]=arr2[j++];
    while(i<n)
        arr3[k++]=arr1[i++];
    while(j<m)
        arr3[k++]=arr2[j++];
    printf("Resultant sorted array is:\n");
    for(int i=0; i<len; i++)
        printf("%d\n",arr3[i]);
}
