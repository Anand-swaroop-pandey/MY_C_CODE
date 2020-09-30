#include<stdio.h>
int main()
{
    int arr[100],n;
    printf("How many elements Do you want ?\n");
    scanf("%d",&n);
    printf("Enter %d elements :\n",n);
    for(int i=0; i<n; i++)
        scanf("%d",&arr[i]);
    segregateEvenOdd(arr,n);
    printf("Array after segregation:\n");
    for(int i = 0; i < n; i++)
        printf("%d ", arr[i]);
    return 0;
}
void segregateEvenOdd(int arr[], int size)
{
    int temp[size],j=0;
    for(int i=0; i<size; i++)
        if(arr[i]%2==0)
            temp[j++]=arr[i];
    for(int i=0; i<size; i++)
        if(arr[i]%2!=0)
            temp[j++]=arr[i];
    for(int i=0; i<size; i++)
        arr[i]=temp[i];
}