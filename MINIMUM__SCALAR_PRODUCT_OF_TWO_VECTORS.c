#include <stdio.h>
int main()
{
    int n;
    printf("Enter the size of an array:\n");
    scanf("%d",&n);
    int arr1[n];
    int arr2[n];
    printf("Enter %d elements of first array:\n",n);
    for(int i=0; i<n; i++)
        scanf("%d",&arr1[i]);
    printf("Enter %d elements of first array:\n",n);
    for(int i=0; i<n; i++)
        scanf("%d",&arr2[i]);
    insertion_sort(arr1,n);
    descending_insertion_sort(arr2,n);
    int result= min_scalar_product(arr1,arr2,n);
    printf("Minimum scalar product of two arrays element is: %d:\n",result);
    return 0;
}
void insertion_sort(int arr1[],int n)
{
    for(int i=1; i<n; i++)
    {
        int  temp=arr1[i];
        int j=i-1;
        while(arr1[j]>temp && j>=0)
        {
            arr1[j+1]=arr1[j];
            j--;
        }
        arr1[j+1]=temp;
    }
}
void descending_insertion_sort(int arr2[],int n)
{
    for(int i=1; i<n; i++)
    {
        int  temp=arr2[i];
        int j=i-1;
        while(arr2[j]<temp && j>=0)
        {
            arr2[j+1]=arr2[j];
            j--;
        }
        arr2[j+1]=temp;
    }
}
int  min_scalar_product(int arr1[],int arr2[],int n)
{
    int sum=0;
    for(int i=0; i<n; i++)
        sum=sum+arr1[i]*arr2[i];
    return sum;
}