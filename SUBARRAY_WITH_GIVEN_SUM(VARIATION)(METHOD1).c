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
    subarrays_sum(arr,n,sum);
    return 0;
}
void subarrays_sum(int arr[],int n,int sum)
{
    for(int i=0; i<n; i++)
    {
        int curr_sum=0;
        for(int j=i; j<n; j++)
        {
            curr_sum=curr_sum+arr[j];
            if(curr_sum==sum)
            {
                printf("Subarray found whose sum is equal to %d\n",sum);
                printf("Starting index=%d and ending index=%d\n",i,j);
                return;
            }
        }
    }
    printf("No subbarray found\n");
}
