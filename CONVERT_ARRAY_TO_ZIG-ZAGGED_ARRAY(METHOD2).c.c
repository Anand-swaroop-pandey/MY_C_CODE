//Given an array of DISTINCT elements, rearrange the elements of array in zig-zag fashion in O(n) time.
//The converted array should be in form a < b > c < d > e < f.
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
    printf("Entered array is:\n");
    for(int i=0; i<n; i++)
        printf("%d ",arr[i]);
    zig_zag(arr,n);
    printf("\nZig-Zagged array is:\n");
    for(int i=0; i<n; i++)
        printf("%d ",arr[i]);
    return 0;
}
void zig_zag(int arr[],int n)
{
    for(int i=0; i<n-1; i++)
        if(arr[i]>arr[i+1] && i%2==0)
            swap(&arr[i],&arr[i+1]);
        else if(arr[i]<arr[i+1] && i%2!=0)
            swap(&arr[i],&arr[i+1]);
}
void swap(int *a,int*b)
{
    int temp=*a;
    *a=*b;
    *b=temp;
}