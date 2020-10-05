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
    int max_diff=maximum_difference(arr,n);
    printf("Maximum difference is %d\n",max_diff);
    return 0;
}
int maximum_difference(int arr[],int n)
{
    int max_diff=INT_MIN;
    for(int i=0; i<n; i++)
        for(int j=i+1; j<n; j++)
    	if((arr[j]-arr[i])>max_diff)
                max_diff=arr[j]-arr[i];
    return max_diff;
}