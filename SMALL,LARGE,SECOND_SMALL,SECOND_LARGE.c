#include<stdio.h>
int main()
{
    int n;
    printf("Enter Array size:\n");
    scanf("%d",&n);
    int arr[n];
    printf("Enter %d elements:\n",n);
    for(int i=0; i<n; i++)
        scanf("%d",&arr[i]);
    rearrangeArray(arr, n);
    printf("Rearranged array is:\n");
    for(int i = 0; i < n; i++)
        printf("%d ",arr[i]);
    return 0;
}
void rearrangeArray(int arr[], int n)
{
    insertion_sort(arr,n);
    int temp[n];
    int k=0;
    for(int i = 0, j = n-1; i<j; i++, j--)
    {
        temp[k++] = arr[i];
        temp[k++] = arr[j];
    }
    if(n%2!=0)
        temp[k]=arr[n/2];
    for(int i = 0; i < n; i++)
        arr[i] =temp[i];
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
