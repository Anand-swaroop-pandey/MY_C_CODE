#include<stdio.h>
int main()
{
    int n;
    printf("Enter the number of elements you want to insert in the Array:\n");
    scanf("%d",&n);
    int arr[n];
    printf("Enter %d elements:\n",n);
    for(int i=0; i<n; i++)
        scanf("%d",&arr[i]);
    remove_duplicate_unsorted(arr,n);
}
void remove_duplicate_unsorted(int arr[],int n)
{
    insertion_sort(arr,n);
    int j=0;
    for(int i=0; i<n-1; i++)
        if(arr[i]!=arr[i+1])
            arr[j++]=arr[i];
    arr[j++]=arr[n-1];
    printf("Duplicate Free Array is:\n");
    for(int i=0; i<j; i++)
        printf("%d\n",arr[i]);
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