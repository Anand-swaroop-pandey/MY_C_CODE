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
    int temp[n], k=0;
    for(int i=0; i<n; i++)
    {
        int j;
        for(j=i+1; j<n; j++)
            if(arr[i]==arr[j])
                break;
        if(j==n)
            temp[k++]=arr[i];
    }
    for(int i=0; i<k; i++)
        arr[i]=temp[i];
    printf("Duplicate Free Array is:\n");
    for(int i=0; i<k; i++)
        printf("%d\n",arr[i]);
}