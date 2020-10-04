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
    insertion_sort(arr,n);
    int num1=arr[0],num2=arr[1];
    int min_sum=num1+num2;
    int l = 0, r = n-1;
    while(l < r)
    {
        int sum = arr[l] + arr[r];
        if(abs(sum) < abs(min_sum))
        {
            min_sum = sum;
            num1=arr[l];
            num2=arr[r];
        }
        if(sum < 0)
            l++;
        else
            r--;
    }
    printf("Elements whose sum is closest to zero are: %d and %d\n ",num1,num2);
}
void insertion_sort(int arr[],int n)
{
    for(int i=1; i<n; i++)
    {
        int temp=arr[i];
        int j=i-1;
        while(arr[j]>temp && j>=0)
        {
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=temp;
    }
}