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
    ascending_insertion_sort(arr1,n);
    ascending_insertion_sort(arr2,n);
    int result= max_scalar_product(arr1,arr2,n);
    printf("Maximum scalar product of two arrays element is: %d:\n",result);
    return 0;
}

void ascending_insertion_sort(int arr[],int n)
{
    for(int i=1; i<n; i++)
    {
        int  temp=arr[i];
        int j=i-1;
        while(arr[j]>temp && j>=0)
        {
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=temp;
    }
}
int  max_scalar_product(int arr1[],int arr2[],int n)
{
    int sum=0;
    for(int i=0; i<n; i++)
        sum=sum+arr1[i]*arr2[i];
    return sum;
}