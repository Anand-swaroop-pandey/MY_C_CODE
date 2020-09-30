#include<stdio.h>
int main()
{
    int n;
    printf("Enter Array Size:\n");
    scanf("%d",&n);
    int arr[n];
    printf("Enter %d elements of the sorted array:\n",n);
    for(int i=0; i<n; i++)
        scanf("%d",&arr[i]);
    int result= appear_once(arr,n);
    printf("Element that Appear once in the given sorted array is:%d\n",result);
    return;
}
int appear_once(int arr[],int n)
{
    int i;
    for(i=0; i<(n-2); i=i+2)
        if(arr[i]!=arr[i+1])
            return arr[i];
    if(i==(n-1))
        return arr[i];
}