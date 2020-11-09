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
    kadanes_algorithm(arr,n);
    return 0;
}
int kadanes_algorithm(int arr[], int n)
{
    int max=INT_MIN,sum=0,index=0,start=0,end=0;
    for(int i=0; i<n; i++)
    {
        sum=sum+arr[i];
        if(sum>max)
        {
            max=sum;
            start=index;
            end=i;
        }
        if(sum<0)
        {
            sum=0;
            index=i+1;
        }
    }
    printf("Subarray with Maximum sum has:");
    printf("Starting index=%d And Ending Index=%d\n",start,end);
    printf("Maximum sum =%d\n",max);
}
