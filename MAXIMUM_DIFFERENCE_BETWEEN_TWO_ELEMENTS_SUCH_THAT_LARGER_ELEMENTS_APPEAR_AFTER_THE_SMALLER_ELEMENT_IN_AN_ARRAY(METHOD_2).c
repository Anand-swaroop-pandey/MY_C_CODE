#include <stdio.h>
#include<limits.h>
int main()
{
    int n;
    printf("Enter the size:\n");
    scanf("%d",&n);
    if(n<2)
    {
        printf("Invalid choice\n");
        return;
    }
    int arr[n];
    printf("Enter %d elements:\n",n);
    for(int i=0; i<n; i++)
        scanf("%d",&arr[i]);
    maximum_difference(arr,n);
    return 0;
}
void maximum_difference(int arr[],int n)
{
    int max_diff = INT_MIN;
    int max_so_far=INT_MIN;
    for(int i =n-1; i>=0; i--)
        if(arr[i]>max_so_far)
            max_so_far = arr[i];
        else if(arr[i]<max_so_far)
            max_diff = maximum(max_diff, max_so_far - arr[i]);
    printf("Maximum difference is %d\n",max_diff);
}
int maximum(int a,int b)
{
    return (a>b)? a: b;
}



