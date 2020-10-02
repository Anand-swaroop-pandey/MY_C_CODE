#include<stdio.h>
int main()
{
    int n;
    printf("Enter the size of the Array:\n");
    scanf("%d",&n);
    if(n<=0)
        return;
    int arr[n];
    for(int i=0; i<n; i++)
        scanf("%d",&arr[i]);
    int max= maximum_difference(n,arr);
    printf("Maximum difference :%d\n",max);
}
int maximum_difference(int n,int arr[])
{
    int max_so_far=arr[0];
    int min_so_far=arr[0];
    int max_diff = 0;
    for(int i = 1; i <n ; i++)
    {
        if(arr[i]>max_so_far)
            max_so_far = arr[i];
        else if(arr[i]<min_so_far)
            min_so_far = arr[i];
    }
    max_diff = max_so_far-min_so_far;
    return max_diff;
}