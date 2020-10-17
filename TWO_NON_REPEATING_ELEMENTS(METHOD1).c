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
    two_non_repeating(arr,n);
    return 0;
}
void two_non_repeating(int arr[],int n)
{
    printf("Two Non-repeating Elements are:\n");
    for(int i=0; i<n; i++)
    {
        int j;
        for(j=0; j<n; j++)
            if(arr[i]==arr[j] && i!=j)
                break;
        if(j==n)
            printf("%d\n",arr[i]);
    }
    
}