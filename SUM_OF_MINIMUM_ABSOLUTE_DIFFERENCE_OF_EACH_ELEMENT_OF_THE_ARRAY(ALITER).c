#include <stdio.h>
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
    int sum=minimum_absolute_difference(arr,n);
    printf("sum of Minimum absolute difference of each element of the array:%d\n",sum);
    return 0;
}
int minimum_absolute_difference(int arr[],int n)
{
    insertion_sort(arr,n);
    int sum =0;
    sum += abs(arr[0] - arr[1]);
    sum += abs(arr[n-1] - arr[n-2]);
    for(int i=1; i<n-1; i++)
        sum=sum+minimum(abs(arr[i] - arr[i-1]), abs(arr[i] - arr[i+1]));
    return sum;
}
int minimum(int a,int b)
{
    if(a<b)
        return a;
    return b;
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


