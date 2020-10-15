#include <stdio.h>
#include<limits.h>
int main()
{
    int n;
    printf("Enter the Size of Array\n");
    scanf("%d",&n);
    int arr[n];
    printf("Enter %d elements:\n",n);
    for(int i=0; i<n; i++)
        scanf("%d",&arr[i]);
    int sum=sum_closest_zero(arr,n);
    printf("Three element sum closest to zero is:%d\n",sum);
    return 0;
}
int sum_closest_zero(int arr[],int n)
{
    int min_sum=INT_MAX;
    for(int i=0; i<n-2; i++)
        for(int j=i+1; j<n-1; j++)
            for(int k=j+1; k<n; k++)
            {
                int sum=arr[i]+arr[j]+arr[k];
                if(abs(sum)<abs(min_sum))
                    min_sum=sum;
            }
    return min_sum;
}