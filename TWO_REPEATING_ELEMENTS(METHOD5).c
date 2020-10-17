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
    two_repeating(arr,n);
    return 0;
}
void two_repeating(int arr[],int n)
{
    printf("Two repeating Elements are:\n");
    for(int i=0; i<n; i++)
    {
        int element=arr[abs(arr[i])];
        if(element<0)
            printf("%d\n",abs(arr[i]));
        else
            arr[abs(arr[i])]=-arr[abs(arr[i])];
    }
}


