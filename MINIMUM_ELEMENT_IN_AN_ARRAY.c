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
    int min=minimum(arr,n);
    printf("Minimum element is %d\n",min);
    return 0;
}
int minimum(int arr[],int size)
{
    int min=arr[0];
    for(int i=1; i<size; i++)
        if(arr[i]<min)
            min=arr[i];
    return min;
}