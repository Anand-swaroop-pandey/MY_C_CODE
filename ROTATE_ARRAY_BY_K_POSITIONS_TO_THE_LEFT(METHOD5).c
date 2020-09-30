#include <stdio.h>
int main()
{
    int n,pos;
    printf("Enter the size of the array:\n");
    scanf("%d",&n);
    if(n==0)
    {
        printf("Invalid choice\n");
        return;
    }
    int arr[n];
    printf("Enter %d elements:\n",n);
    for(int i=0; i<n; i++)
        scanf("%d",&arr[i]);
    printf("Array before Rotation:\n");
    for(int i=0; i<n; i++)
        printf("%d ",arr[i]);
    printf("Enter the key:\n");
    scanf("%d",&pos);
    rotate_left(arr,n,pos);
    printf("Array after Rotation:\n");
    for(int i=0; i<n; i++)
        printf("%d ",arr[i]);
    return 0;
}
void rotate_left(int arr[],int n,int pos)
{
    int Double=2*n;
    int temp[Double];
    for(int i=0; i<n; i++)
    {
        temp[i]=arr[i];
        temp[n+i]=arr[i];
    }
    for(int i=pos; i<pos+n; i++)
        arr[i-pos]=temp[i];
}