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
    printf("Entered Elements are:\n",n);
    for(int i=0; i<n; i++)
        printf("%d ",arr[i]);
    int max=maximum_sum(arr,n);
    printf("\nMaximum_sum_obtained_by_summing_any_%d_elements is: %d\n",n-1,max);
    return 0;
}
int maximum_sum(int arr[],int n)
{
    insertion_sort_descending(arr,n);
    long long int sum=0;
    for(int i=0; i<n-1; i++)
        sum=sum+arr[i];
    return sum;
}
void insertion_sort_descending(int arr[],int n)
{
    for(int i=1; i<n; i++)
    {
        int temp=arr[i];
        int j=i-1;
        while(arr[j]<temp && j>=0)
        {
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=temp;
    }
}
