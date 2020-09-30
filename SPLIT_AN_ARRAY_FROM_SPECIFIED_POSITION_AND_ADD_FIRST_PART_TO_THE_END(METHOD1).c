#include <stdio.h>
void split(int,int [],int);
int main()
{
    int n,pos;
    printf("Enter the size of the array:\n");
    scanf("%d",&n);
    if(n<=0)
        return;
    int arr[n];
    printf("Enter %d elements:\n",n);
    for(int i=0; i<n; i++)
        scanf("%d",&arr[i]);
    printf("Entered Elements are:\n");
    for(int i=0; i<n; i++)
        printf("%d ",arr[i]);
    printf("Enter the position to split the array:\n");
    scanf("%d",&pos);
    if(pos<0 || pos>n)
        return;
    split(n,arr,pos);
    printf("Array after splitting is:\n");
    for(int i=0; i<n; i++)
        printf("%d ",arr[i]);
    return 0;
}
void split(int n,int arr[],int pos)
{
    for(int i=0; i<pos; i++)
    {
        int temp=arr[0];
        for(int j=0; j<n-1; j++)
            arr[j]=arr[j+1];
        arr[n-1]=temp;
    }
}
