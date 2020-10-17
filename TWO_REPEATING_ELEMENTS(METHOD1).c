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
    int count=0;
    printf("Two repeating Elements are:\n");
    for(int i=0; i<n; i++)
        for(int j=i+1; j<n; j++)
            if(arr[i]==arr[j])
                printf("%d\n",arr[i]);
}