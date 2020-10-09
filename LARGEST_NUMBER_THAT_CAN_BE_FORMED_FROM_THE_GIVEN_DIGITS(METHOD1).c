#include <stdio.h>
#include<limits.h>
int main()
{
    int n;
    printf("Enter the size of the array:\n");
    scanf("%d",&n);
    int arr[n];
    printf("Enter %d elements:\n",n);
    for(int i=0; i<n; i++)
        scanf("%d",&arr[i]);
    int largest= largest_num_formed(arr,n);
    printf("Largest number that can be formed from the given digits is %d\n",largest);
    return 0;
}
int largest_num_formed(int arr[],int n)
{
    insertion_sort_descending(arr,n);
    int largest= arr[0];
    for(int i=1; i<n; i++)
        largest = largest*10 + arr[i];
    return largest;
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