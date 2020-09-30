#include<stdio.h>
int appear_once(int [],int);
int main()
{
    int n;
    printf("Enter the Size of the Array:\n");
    scanf("%d",&n);
    int arr[n];
    printf("Enter %d elements:\n",n);
    for(int i=0; i<n; i++)
        scanf("%d",&arr[i]);
    int result=appear_once(arr,n);
    printf("Element Appearing once is:%d\n",result);
}
int appear_once(int arr[],int n)
{
    int XOR=0;
    for(int i=0; i<n; i++)
        XOR=XOR^arr[i];
    return XOR;
}