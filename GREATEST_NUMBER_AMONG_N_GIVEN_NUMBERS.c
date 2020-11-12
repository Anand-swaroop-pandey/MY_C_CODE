#include <stdio.h>
#include <limits.h>
int main()
{
    int n;
    printf("How many number Do you want to Enter:\n");
    scanf("%d",&n);
    int arr[n];
    printf("Enter %d numbers:\n",n);
    for(int i=0; i<n; i++)
        scanf("%d",&arr[i]);
    int largest=GREATEST(arr,n);
    printf("Greatest number between provided %d numbers is %d\n",n,largest);
    return 0;
}
int GREATEST(int arr[],int n)
{
    int max=INT_MIN;
    for(int i=0; i<n; i++)
        if(arr[i]>max)
            max=arr[i];
    return max;
}