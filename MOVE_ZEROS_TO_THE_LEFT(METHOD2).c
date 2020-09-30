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
    int j=0;
    for(int i=0; i<n; i++)
        if(arr[i]!=0)
            arr[j++]=arr[i];
    while(j<n)
        arr[j++]=0;
    printf("Resultant Array:\n");
    for(int i=0; i<n; i++)
        printf("%d",arr[i]);
}