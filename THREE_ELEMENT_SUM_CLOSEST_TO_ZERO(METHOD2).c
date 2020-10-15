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
    insertion_sort(arr,n);
    int closest_sum=INT_MAX;
    for(int i=0; i<n; i++)
    {
        int start=i+1;
        int end=n-1;
        while(start<end)
        {
            int sum=arr[i]+arr[start]+arr[end];
            if(abs(sum)<abs(closest_sum))
                closest_sum=sum;
            if(sum<0)
                start++;
            else
                end--;
        }
    }
    return closest_sum;
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