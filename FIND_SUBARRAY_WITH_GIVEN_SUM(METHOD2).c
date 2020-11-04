#include <stdio.h>
int main()
{
    int n,sum;
    printf("Enter the size of the array:\n");
    scanf("%d",&n);
    int arr[n];
    printf("Enter %d element:\n",n);
    for(int i=0; i<n; i++)
        scanf("%d",&arr[i]);
    printf("Enter the sum:\n");
    scanf("%d",&sum);
    subarray_sum(arr,n,sum);
    return 0;
}
void subarray_sum(int arr[],int n,int sum)
{
    int curr_sum =arr[0], start = 0,end=1;
    while(end<=n)
    {
        while(curr_sum > sum && start < end-1)
            curr_sum = curr_sum - arr[start++];
        if(curr_sum == sum)
        {
            printf("Sum found between indexes %d and %d which sums to %d",start, end-1,sum);
            return ;
        }
        if(end< n)
            curr_sum = curr_sum + arr[end++];
    }
    printf("No Subarray Found:\n");
}