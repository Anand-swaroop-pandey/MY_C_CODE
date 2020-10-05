#include <stdio.h>
#include<limits.h>
int main()
{
    int n;
    printf("Enter the size:\n");
    scanf("%d",&n);
    if(n<2)
    {
        printf("Invalid choice\n");
        return;
    }
    int arr[n];
    printf("Enter %d elements:\n",n);
    for(int i=0; i<n; i++)
        scanf("%d",&arr[i]);
    maximum_difference(arr,n);
    return 0;
}
void maximum_difference(int arr[],int n)
{
    int max_diff=INT_MIN;
    for(int i =0; i<n-1; i++)
    {
        int max_in_range=maximum(arr,n,i+1);
        int diff=max_in_range-arr[i];
        if(diff>max_diff)
            max_diff=diff;
    }
    printf("%d\n",max_diff);
}
int maximum(int arr[],int n,int start)
{
    int max=INT_MIN;
    for(int i=start; i<n; i++)
        if(arr[i]>max)
            max=arr[i];
    return max;
}



