#include <stdio.h>
float median_array(int [],int);
int main()
{
    int n;
    printf("Enter the size of the array:\n");
    scanf("%d",&n);
    int arr[n];
    printf("Enter %d elements:\n",n);
    for(int i=0; i<n; i++)
        scanf("%d",&arr[i]);
    float result=median_array(arr,n);
    printf("Median of the given array is %0.2f:\n",result);
    return 0;
}

float median_array(int arr[],int n)
{
    float median;
    if(n%2==0)
    {
        median=(arr[n/2]+arr[(n-1)/2])/(float)2;
        return median;
    }
    else
    {
        median=arr[n/2];
        return median;
    }
}