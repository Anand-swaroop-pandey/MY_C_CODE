#include <stdio.h>
int main()
{
    int n;
    printf("Enter the size of the array:\n");
    scanf("%d",&n);
    int arr[n];
    printf("Enter %d elements:\n",n);
    for(int i=0; i<n; i++)
        scanf("%d",&arr[i]);
    int check= check_distinct(arr,n);
    if(check==-1)
        printf("Array contains Duplicate elements\n");
    else
        printf("Array contains all distinct elements\n");
    return 0;
}
int check_distinct(int arr[],int n)
{
    insertion_sort(arr,n);
    for(int i=0; i<n-1; i++)
        if(arr[i]==arr[i+1])
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