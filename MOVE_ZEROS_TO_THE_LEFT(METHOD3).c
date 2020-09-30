#include<stdio.h>
int main()
{
    int n;
    printf("Enter the Size of Array\n");
    scanf("%d",&n);
    int arr[n];
    printf("Enter %d Elements:\n",n);
    for(int i = 0; i < n; i++)
        scanf("%d",&arr[i]);
    moveZerosToEnd(arr, n);
    printf("\nModified array: ");
    for(int i = 0; i < n; i++)
        printf("%d ", arr[i]);
    return 0;
}
void moveZerosToEnd(int arr[], int n)
{
    int j=0;
    for(int i=0; i<n; i++)
    {
        if(arr[i]!=0 && arr[j]==0)
            swap(&arr[i],&arr[j]);
        if(arr[j]!=0)
            j++;
    }
}
void swap(int *a,int*b)
{
    int temp=*a;
    *a=*b;
    *b=temp;
}
