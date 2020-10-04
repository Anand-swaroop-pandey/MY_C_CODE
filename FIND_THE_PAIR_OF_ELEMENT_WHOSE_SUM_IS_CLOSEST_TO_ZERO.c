#include <stdio.h>
#include<stdlib.h>
int main()
{
    int n;
    printf("Enter the size of array:\n");
    scanf("%d",&n);
    if(n<2)
        return;
    int arr[n];
    printf("Enter %d elements:\n",n);
    for(int i=0; i<n; i++)
        scanf("%d",&arr[i]);
    printf("\nEntered elements are:\n");
    for(int i=0; i<n; i++)
        printf("%d ",arr[i]);
    sum_closer_to_0(n,arr);
    return 0;
}
void sum_closer_to_0(int n,int arr[])
{
    int num1=arr[0],num2=arr[1];
    int min_sum=num1+num2;
    for(int i=0; i<n; i++)
        for(int j=i+1; j<n; j++)
        {
            int sum=arr[i]+arr[j];
            if(abs(sum) < abs(min_sum))
            {
                min_sum=sum;
                num1=arr[i];
                num2=arr[j];
            }
        }
    printf("Elements whose sum is closest to zero are: %d and %d\n ",num1,num2);
}