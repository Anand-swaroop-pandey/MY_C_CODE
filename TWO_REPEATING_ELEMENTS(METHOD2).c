#include <stdio.h>
int main()
{
    int n;
    printf("Enter the size of the Array\n");
    scanf("%d",&n);
    int arr[n];
    printf("Enter %d elements:\n",n);
    for(int i=0; i<n; i++)
        scanf("%d",&arr[i]);
    two_repeating(arr,n);
    return 0;
}
void two_repeating(int arr[],int n)
{
    insertion_sort(arr,n);
    printf("Two repeating Elements are:\n");
    for(int i=0; i<n; i++)
        if(arr[i]==arr[i+1])
            printf("%d\n",arr[i]);
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