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
    int prefix[n],curr_sum=0,count=0;
    for(int i=0; i<n; i++)
    {
        curr_sum=curr_sum+arr[i];
        prefix[i]=curr_sum;
        if(prefix[i]==sum)
            count++;
        int upper_range=i;
        int check=count_is_present((prefix[i]-sum),prefix,upper_range);
        if(check!=0)
            count=count+check;
    }
    return count;
}
int count_is_present(int key,int prefix[],int upper_range)
{
    int count=0;
    for(int i=0; i<upper_range; i++)
        if(key==prefix[i])
            count++;
    return count;
}
