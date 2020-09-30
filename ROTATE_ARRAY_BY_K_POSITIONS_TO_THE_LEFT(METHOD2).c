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
    for(int i=0; i<pos; i++)
    {
        int temp=arr[0];
        for(int j=0; j<n-1; j++)
            arr[j]=arr[j+1];
        arr[n-1]=temp;
    }
}