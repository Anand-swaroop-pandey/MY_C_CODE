#include <stdio.h>
#include <limits.h>
int main()
{
    int n;
    printf("Enter the size of the Array:\n");
    scanf("%d",&n);
    int arr[n];
    printf("Enter %d elements\n",n);
    for(int i=0; i<n; i++)
        scanf("%d",&arr[i]);
    maximum_sum_subarray(arr,n);
    return 0;
}
int maximum_sum_subarray(int arr[], int n)
{
    int max=INT_MIN,start_index,end_index;
    for(int i=0; i<n; i++)
    {
        int sum=0;
        for(int j=i; j<n; j++)
        {
            sum=sum+arr[j];
            if(sum>max)
            {
                max=sum;
                start_index=i;
                end_index=j;
            }
        }
    }
    printf("Subarray with Maximum sum has:");
    printf("Starting index=%d And Ending Index=%d\n",start_index,end_index);
    printf("Maximum sum =%d\n",max);
}
