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
    two_Non_repeating(arr,n);
    return 0;
}
void two_Non_repeating(int arr[],int n)
{
    insertion_sort(arr,n);
    printf("Two Non repeating Elements are:\n");
    int i=0;
    while(i<n-1)
        if(arr[i]!=arr[i+1])
            printf("%d\n",arr[i++]);
        else if(arr[i]==arr[i+1])
            i=i+2;
    if(i==(n-1))
        printf("%d",arr[i]);
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