#include <stdio.h>
int main()
{
    int n1,n2;
    printf("Enter size of Array1\n");
    scanf("%d",&n1);
    int arr1[n1];
    printf("Enter size of Array2\n");
    scanf("%d",&n2);
    int arr2[n2];
    printf("Enter %d element of array 1\n",n1);
    for(int i=0; i<n1; i++)
        scanf("%d",&arr1[i]);
    printf("Enter %d element of array 2\n",n2);
    for(int i=0; i<n2; i++)
        scanf("%d",&arr2[i]);
    merge_unsorted_arrays(arr1,arr2,n1,n2);
    return 0;
}
void merge_unsorted_arrays(int arr1[],int arr2[],int n1,int n2)
{
    int len=n1+n2;
    int arr3[len];
    for(int i=0; i<n1; i++)
        arr3[i]=arr1[i];
    for(int i=0; i<n2; i++)
        arr3[n1+i]=arr2[i];
    printf("Merged array is :\n");
    for(int i=0; i<len; i++)
        printf("%d\n",arr3[i]);
}