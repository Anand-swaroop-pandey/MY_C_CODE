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
    int prefix[n],curr_sum=0;
    for(int i=0; i<n; i++)
    {
        curr_sum=curr_sum+arr[i];
        prefix[i]=curr_sum;
        if(prefix[i]==sum)
        {
            printf("Subarray found whose sum is equal to %d\n",sum);
            printf("Starting index=%d and ending index=%d\n",0,i);
            return;
        }
        int upper_range=i;
        int check=is_present((prefix[i]-sum),prefix,upper_range);
        if(check!=-1)
        {
            printf("Subarray found whose sum is equal to %d\n",sum);
            printf("Starting index=%d and ending index=%d\n",check+1,i);
             return;
        }
    }
    printf("NO subarray found\n");
}
int is_present(int key,int prefix[],int upper_range)
{
    for(int i=0; i<upper_range; i++)
        if(key==prefix[i])
            return i;
    return -1;
}
