#include<stdio.h>
int main()
{
    int n,sum;
    printf("Enter tne size of the array:\n");
    scanf("%d",&n);
    int arr[n];
    printf("Enter %d elements:\n",n);
    for(int i=0; i<n; i++)
        scanf("%d",&arr[i]);
    printf("Enter the sum:\n");
    scanf("%d",&sum);
    int count=count_subarrays_sum(arr,n,sum);
    printf("Number of subarays whose sum is equal to %d is %d\n",sum,count);
    return 0;
}
int count_subarrays_sum(int arr[],int n,int sum)
{
    int count=0;
    for(int i=0; i<n; i++)
    {
        int curr_sum=0;
        for(int j=i; j<n; j++)
        {
            curr_sum=curr_sum+arr[j];
            if(curr_sum==sum)
                count++;
        }
    }
    return count;
}
