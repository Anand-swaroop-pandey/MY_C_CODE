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
    rotate_left(arr,n,pos);
    printf("Rotated Array is:\n");
    for(int i=0; i<n; i++)
        printf("%d ",arr[i]);
    return 0;
}
void rotate_left(int arr[],int n,int pos)
{
    int temp[pos];
    for(int i=0; i<pos; i++)
        temp[i]=arr[i];
    for(int i=pos; i<n; i++)
        arr[i-pos]=arr[i];
    for(int i=0; i<pos; i++)
        arr[n-pos+i]=temp[i];
}