#include <stdio.h>
int main()
{
    int n,pos;
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
    printf("\nEnter position:\n");
    scanf("%d",&pos);
    rotate_right(arr,n,pos);
    printf("Rotated Array is:\n");
    for(int i=0; i<n; i++)
        printf("%d ",arr[i]);
    return 0;
}
void rotate_right(int arr[],int n,int pos)
{
    int Double=2*n;
    int temp[Double];
    for(int i=0; i<n; i++)
    {
        temp[i]=arr[i];
        temp[i+n]=arr[i];
    }
    for(int i=0; i<n; i++)
        arr[n-1-i]=temp[Double-1-i-pos];
}
