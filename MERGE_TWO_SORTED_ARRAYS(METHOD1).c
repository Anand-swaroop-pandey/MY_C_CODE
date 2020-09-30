#include <stdio.h>
int main()
{
    int n1,n2;
    printf("Enter size of Array1\n");
    scanf("%d",&n1);
    int arr1[n1];
    printf("Enter a sorted array1:\n");
    printf("Enter %d element of array 1\n",n1);
    for(int i=0; i<n1; i++)
        scanf("%d",&arr1[i]);
    printf("Enter size of Array2\n");
    scanf("%d",&n2);
    int arr2[n2];
    printf("Enter a sorted array2:\n");
    printf("Enter %d element of array 2\n",n2);
    for(int i=0; i<n2; i++)
        scanf("%d",&arr2[i]);
    merge_sorted_arrays(arr1,arr2,n1,n2);
    return 0;
}
void merge_sorted_arrays(int arr1[],int arr2[],int n1,int n2)
{
    int len=n1+n2;
    int arr3[len];
    for(int i=0; i<n1; i++)
        arr3[i]=arr1[i];
    for(int i=0; i<n2; i++)
        arr3[n1+i]=arr2[i];
    insertion_sort(arr3,len);
    printf("Merged array is :\n");
    for(int i=0; i<len; i++)
        printf("%d\n",arr3[i]);
}
void insertion_sort(int arr3[],int len)
{
    for(int i=1; i<len; i++)
    {
        int temp=arr3[i];
        int j=i-1;
        while(arr3[j]>temp && j>=0)
        {
            arr3[j+1]=arr3[j];
            j--;
        }
        arr3[j+1]=temp;
    }
}