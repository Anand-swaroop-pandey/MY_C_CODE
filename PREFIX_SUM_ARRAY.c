#include<stdio.h>
int main()
{
    int n,start,end;
    printf("Enter tne size of the array:\n");
    scanf("%d",&n);
    int arr[n];
    printf("Enter %d elements:\n",n);
    for(int i=0; i<n; i++)
        scanf("%d",&arr[i]);
    printf("Enter starting Index of the subrray:\n");
    scanf("%d",&start);
    printf("Enter ending  Index of the subrray:\n");
    scanf("%d",&end);
    int sum=prefix_array(arr,n,start,end);
    printf("Sum of the Subarray bounded between starting index :%d and ending index :%d is %d\n",start,end,sum);
    return 0;
}
int prefix_array(int arr[],int n,int start_index,int end_index)
{
    int prefix_arr[n],sum;
    prefix_arr[0]=arr[0];
    for(int i=1; i<n; i++)
        prefix_arr[i]=prefix_arr[i-1]+arr[i];
    if(start_index==0)
        sum=prefix_arr[end_index];
    else
        sum=prefix_arr[end_index]-prefix_arr[start_index-1];
    return sum;
}