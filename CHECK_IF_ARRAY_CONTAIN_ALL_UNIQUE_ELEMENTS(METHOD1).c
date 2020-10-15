#include <stdio.h>
int main()
{
    int n;
    printf("Enter the size of the array:\n");
    scanf("%d",&n);
    int arr[n];
    printf("Enter %d elements:\n",n);
    for(int i=0; i<n; i++)
        scanf("%d",&arr[i]);
    int check= check_distinct(arr,n);
    if(check==-1)
        printf("Array contains Duplicate elements\n");
    else
        printf("Array contains all distinct elements\n");
    return 0;
}
int check_distinct(int arr[],int n)
{
    for(int i=0; i<n; i++)
        for(int j=i+1; j<n; j++)
            if(arr[i]==arr[j])
                return -1;
    return 0;
}