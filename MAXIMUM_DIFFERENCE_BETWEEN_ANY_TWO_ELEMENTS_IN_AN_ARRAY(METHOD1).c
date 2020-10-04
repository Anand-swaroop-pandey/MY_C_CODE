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
    int max_diff=abs(arr[0]-arr[1]);
    for(int i=0; i<n; i++)
        for(int j=i+1; j<n; j++)
            if(abs(arr[i]-arr[j])>max_diff)
    	max_diff=abs(arr[i]-arr[j]);
    return max_diff;
}