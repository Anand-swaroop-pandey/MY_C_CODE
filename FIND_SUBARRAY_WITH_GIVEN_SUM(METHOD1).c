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
    for(int i=0; i<n; i++)
    {
        int  temp=0;
        for(int j=i; j<n; j++)
        {
            temp=temp+arr[j];
            if(temp==sum)
            {
                printf("Subarray Found whose sum is %d\n",sum);
                printf("starting Index of subarray is:%d and ending index of Subarray is :%d\n",i,j);
                return ;
            }
        }
    }
    printf("No subarray Found:\n");
}