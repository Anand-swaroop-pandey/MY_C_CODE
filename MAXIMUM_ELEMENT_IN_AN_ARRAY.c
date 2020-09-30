#include <stdio.h>
int main()
{
    int n;
    printf("Enter the size of the array\n");
    scanf("%d",&n);
    int arr[n];
    printf("Enter %d Elements\n",n);
    for(int i=0; i<n; i++)
        scanf("%d",&arr[i]);
    int max=maximum(arr,n);
    printf("Maximum element is %d\n",max);
    return 0;
}
int maximum(int arr[],int size)
{
    int max=arr[0];
    for(int i=1; i<size; i++)
        if(arr[i]>max)
            max=arr[i];
    return max;
}