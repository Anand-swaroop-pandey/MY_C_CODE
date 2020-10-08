#include <stdio.h>
int main()
{
    int n;
    printf("Enter the size of the Array:\n");
    scanf("%d",&n);
    int arr[n];
    printf("Enter %d elements:\n",n);
    for(int i=0; i<n; i++)
        scanf("%d",&arr[i]);
    int sum_unique=sum_all_unique(arr,n);
    printf("Sum of All unique elements in the Array is:%d\n",sum_unique);
    return 0;
}
int  sum_all_unique(int arr[],int n)
{
    int sum=0;
    insertion_sort(arr,n);
    for(int i=0; i<n; i++)
        if(arr[i]!=arr[i+1])
            sum=sum+arr[i];
    return sum;
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