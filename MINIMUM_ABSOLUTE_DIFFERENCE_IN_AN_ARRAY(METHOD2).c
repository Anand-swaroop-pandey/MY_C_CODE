#include <stdio.h>
#include<limits.h>
int main()
{
    int n;
    printf("Enter the size:\n");
    scanf("%d",&n);
    if(n==0)
    {
        printf("Invalid choice\n");
        return;
    }
    int arr[n];
    printf("Enter %d elements:\n",n);
    for(int i=0; i<n; i++)
        scanf("%d",&arr[i]);
    int min= minimum_absolute_difference(arr,n);
    printf("minimum absolute difference between any pair of Element in an array is :%d\n",min);
    return 0;
}
int minimum_absolute_difference(int arr[],int n)
{
    insertion_sort(arr,n);
    int min=arr[1]-arr[0];
    for(int i=2; i<n; i++)
    {
        int curr_min=(arr[i] - arr[i-1]);
        if(curr_min<min)
            min=curr_min;
    }
    return min;
}
void insertion_sort(int arr[],int n)
{
    for(int i=1; i<n; i++)
    {
        int temp=arr[i];
        int j=i-1;
        while(arr[j]>temp&& j>=0)
        {
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=temp;
    }
}