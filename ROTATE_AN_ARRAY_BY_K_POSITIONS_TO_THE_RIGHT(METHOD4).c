
#include <stdio.h>
int main()
{
    int n,k;
    printf("Enter the size of the Array:\n");
    scanf("%d",&n);
    if(n==0)
    {
        printf("Invalid choice\n");
        return;
    }
    int arr[n];
    printf("Enter %d element:\n",n);
    for(int i=0; i<n; i++)
        scanf("%d",&arr[i]);
    printf("Array before Rotation:\n");
    for(int i=0; i<n; i++)
        printf("%d ",arr[i]);
    printf("\nEnter key:\n");
    scanf("%d",&k);
    rotate_array(arr,n,k);
    printf("Rotated Array is:\n");
    for(int i=0; i<n; i++)
        printf("%d ",arr[i]);
    return 0;
}
void rotate_array(int arr[],int n,int k)//reversal algorithm
{
    reverse_array(arr,0,(n-1-k));
    reverse_array(arr,n-k,n-1);
    reverse_array(arr,0,n-1);
}
void reverse_array(int arr[],int start,int end)
{
    while(start<end)
    {
        swap(&arr[start],&arr[end]);
        start++;
        end--;
    }
}
void swap(int*a,int*b)
{
    int temp=*a;
    *a=*b;
    *b=temp;
}
