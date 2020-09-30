#include<stdio.h>
int main()
{
    int n;
    printf("Enter the number of elements you want to insert in the Array:\n");
    scanf("%d",&n);
    int arr[n];
    printf("Enter %d elements:\n",n);
    for(int i=0; i<n; i++)
        scanf("%d",&arr[i]);
    remove_duplicate_unsorted(arr,n);
}
void remove_duplicate_unsorted(int arr[],int n)
{
    int k=0;
    for(int i=0; i<n; i++)
    {
        int j;
        for(j=i+1; j<n; j++)
            if(arr[i]==arr[j])
                break;
        if(j==n)
            arr[k++]=arr[i];
    }
    printf("Duplicate Free Array is:\n");
    for(int i=0; i<k; i++)
        printf("%d\n",arr[i]);
}