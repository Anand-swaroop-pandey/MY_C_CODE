#include<stdio.h>
#include<limits.h>
int main()
{
    int n;
    printf("Enter the Size of the array:\n");
    scanf("%d",&n);
    int arr[n];
    printf("Enter %d elements:\n",n);
    for(int i=0; i<n; i++)
        scanf("%d",&arr[i]);
    int third=third_Smallest(arr,n);
    printf("The third Smallest element is %d\n", third);
}
int third_Smallest(int arr[], int n)
{
    if(n< 3)
    {
        printf(" Invalid Input ");
        return;
    }
    insertion_sort_ascending(arr,n);
    return arr[2];
}
void insertion_sort_ascending(int arr[],int n)
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

