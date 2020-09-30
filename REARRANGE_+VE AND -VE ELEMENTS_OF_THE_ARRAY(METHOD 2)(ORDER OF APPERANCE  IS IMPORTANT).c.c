#include <stdio.h>
int main()
{
    int n;
    printf("Enter the size of the Array:\n");
    scanf("%d",&n);
    int arr[n];
    printf("Enter %d elements:\n",n);
    for(int i=0; i<n; i++)
        scanf("%d",&arr[i]);
    rearrange(arr,n); -
    printf("Rearranged elements are:\n");
    for(int i=0; i<n; i++)
        printf("%d\n",arr[i]);
    return 0;
}
void rearrange(int arr[], int n)
{
    int temp[n],j=0;
    for(int i = 0; i < n; i++)
        if(arr[i]<0)
            temp[j++]=arr[i];
    for(int i = 0; i < n; i++)
        if(arr[i]>=0)
            temp[j++]=arr[i];
    for(int i = 0; i < n; i++)
        arr[i]=temp[i];
}