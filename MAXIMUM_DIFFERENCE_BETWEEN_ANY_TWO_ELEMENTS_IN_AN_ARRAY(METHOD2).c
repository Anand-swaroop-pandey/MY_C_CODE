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
    int max_element=find_max(arr,n);
    int min_element=find_min(arr,n);
    int max_diff=max_element-min_element;
    return max_diff;
}
int find_max(int arr[],int n)
{
    int max=arr[0];
    for(int i=1; i<n; i++)
        if(arr[i]>max)
            max=arr[i];
    return max;
}
int find_min(int arr[],int n)
{
    int min=arr[0];
    for(int i=1; i<n; i++)
        if(arr[i]<min)
            min=arr[i];
    return min;
}