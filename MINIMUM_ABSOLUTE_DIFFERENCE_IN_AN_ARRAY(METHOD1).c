#include <stdio.h>
int main()
{
    int n;
    printf("Enter the size:\n");
    scanf("%d",&n);
    if(n==0)
    {
        printf("Invalid choice\n");
        return;
    }
    int arr[n];
    printf("Enter %d elements:\n",n);
    for(int i=0; i<n; i++)
        scanf("%d",&arr[i]);
    int min= minimum_absolute_difference(arr,n);
    printf("minimum absolute difference in an array is :%d\n",min);
    return 0;
}
int minimum_absolute_difference(int arr[],int n)
{
    int min=abs(arr[0]-arr[1]);
    for(int i=0; i<n; i++)
        for(int j=i+1; j<n; j++)
        {
            int curr_min=abs(arr[i] - arr[j]);
            if(curr_min<min)
                min=curr_min;
        }
    return min;
}

