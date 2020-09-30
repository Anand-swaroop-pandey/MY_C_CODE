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
    rotate_array(arr,n,pos);
    printf("Rotated Array is:\n");
    for(int i=0; i<n; i++)
        printf("%d ",arr[i]);
    return 0;
}
void rotate_array(int arr[],int n,int pos) //bruteforce approach
{
    for(int i=0; i<pos; i++)
    {
        int  temp=arr[n-1];
        for(int j=n-1; j>0; j--)
            arr[j]=arr[j-1];
        arr[0]=temp;
    }
}