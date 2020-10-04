#include <stdio.h>
int main()
{
    int n;
    printf("Enter the size of the array:\n");
    scanf("%d",&n);
    if(n==0)
    {
        printf("Invalid choice:\n");
        return;
    }
    int arr[n];
    printf("Enter %d elements:\n",n);
    for(int i=0; i<n; i++)
        scanf("%d",&arr[i]);
    zig_zag(arr,n);
    printf("Zig-Zagged array is:\n");
    for(int i=0; i<n; i++)
        printf("%d ",arr[i]);
    return 0;
}
void zig_zag(int arr[],int n)
{
    insertion_sort(arr,n);
    for(int i=1; i<n-1; i=i+2)
        swap(&arr[i],&arr[i+1]);
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
void swap(int *a,int*b)
{
    int temp=*a;
    *a=*b;
    *b=temp;
}