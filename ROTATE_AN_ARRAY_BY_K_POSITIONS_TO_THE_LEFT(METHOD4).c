#include<stdio.h>
int main()
{
    int n,pos;
    printf("Enter the size:\n");
    scanf("%d",&n);
    if(n==0)
    {
        printf("Invalid choice:\n");
        return;
    }
    int arr[n];
    printf("Enter %d elelments:\n",n);
    for(int i=0; i<n; i++)
        scanf("%d",&arr[i]);
    printf("Array before Rotation:\n");
    for(int i=0; i<n; i++)
        printf("%d ",arr[i]);
    printf("\nEnter the position:\n");
    scanf("%d",&pos);
    rotate_left(arr,n,pos);
    printf("Array after rotation is:\n");
    for(int i=0; i<n; i++)
        printf("%d ",arr[i]);
    return;
}
void rotate_left(int arr[],int n,int pos)//reversal algorithm
{
    reverse_array(arr,0,n-1);
    reverse_array(arr,0,n-pos-1);
    reverse_array(arr,n-pos,n-1);
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
