#include <stdio.h>
int main()
{
    int n;
    printf("Enter the size of the Array\n");
    scanf("%d",&n);
    int arr[n];
    printf("Enter %d elements:\n",n);
    for(int i=0; i<n; i++)
        scanf("%d",&arr[i]);
    move_zero(arr,n);
    return 0;
}
void move_zero(int arr[],int n)
{
    int temp[n],j=0;
    for(int i=0; i<n; i++)
        temp[i]=0;
    for(int i=0; i<n; i++)
        if(arr[i]!=0)
            temp[j++]=arr[i];
    for(int i=0; i<n; i++)
        arr[i]=temp[i];;
    printf("Resultant Array:\n");
    for(int i=0; i<n; i++)
        printf("%d",arr[i]);
}