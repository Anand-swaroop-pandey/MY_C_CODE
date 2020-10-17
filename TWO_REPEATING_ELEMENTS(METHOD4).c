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
    int  temp[n-1];
    for(int i=0; i<n-1; i++)
        temp[i]=1;
    for(int i=0; i<n; i++)
        temp[arr[i]]=-temp[arr[i]];
    printf("Two repeating Elements are:\n");
    for(int i=1; i<n-1; i++)
        if(temp[i]==1)
            printf("%d\n",i);
}


