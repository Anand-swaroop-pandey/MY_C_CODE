#include<stdio.h>
int main()
{
    int n;
    printf("Enter the size of the Array:\n");
    scanf("%d",&n);
    int arr[n];
    printf("Enter %d elements:\n");
    for(int i=0; i<n; i++)
        scanf("%d",&arr[i]);
    moveZerosToEnd(arr, n);
    printf("\nModified array: ");
    for(int i = 0; i < n; i++)
        printf("%d\n",arr[i]);
    return 0;
}
void moveZerosToEnd(int arr[], int n)
{
    int j= 0;
    for(int i = 0; i < n; i++)
        if(arr[i] != 0)
            swap(&arr[j++],& arr[i]);
}
void swap(int*a,int*b)
{
    int temp=*a;
    *a=*b;
    *b=temp;
}
