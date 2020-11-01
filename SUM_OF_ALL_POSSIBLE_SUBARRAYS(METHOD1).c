#include<stdio.h>
int main()
{
    int n;
    printf("Enter tne size of the array:\n");
    scanf("%d",&n);
    int arr[n];
    printf("Enter %d elements:\n",n);
    for(int i=0; i<n; i++)
        scanf("%d",&arr[i]);
    int len=sizeof(arr)/sizeof(arr[0]);
    Sum_All_subarrays(arr,len);
    return 0;
}
void  Sum_All_subarrays(int arr[],int n)
{
    long long int sum=0;
    for(int i=0; i<n; i++)
        for(int j=i; j<n; j++)
            for(int k=i; k<=j; k++)
                sum=sum+arr[k];
    printf("Sum of all subarrays is %d\n",sum);
}