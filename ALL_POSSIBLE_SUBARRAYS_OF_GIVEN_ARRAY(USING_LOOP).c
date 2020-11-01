#include<stdio.h>
int main()
{
    int n;
    printf("Enter tne size of the array:\n");
    scanf("%d",&n);
    int arr[n];
    printf("Enter %d elements:\n",n);
    for(int i=0; i<n; i++)
        scanf("%d",&arr[i]);
    printf("All subarrays are:\n");
    All_subarrays(arr,n);
    return 0;
}
void  All_subarrays(int arr[],int n)
{
    for(int i=0; i<n; i++)
    {
        for(int j=i; j<n; j++)
        {
            for(int k=i; k<=j; k++)
                printf("%d ",arr[k]);
            printf("\n");
        }
        printf("\n");
    }
}