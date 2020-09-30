#include<stdio.h>
#include<limits.h>
int main()
{
    int n;
    printf("Enter the size of the Array:\n");
    scanf("%d",&n);
    int arr[n];
    if(n<2)
        return;
    else
    {
        printf("Enter %d elements:\n",n);
        for(int i=0; i<n; i++)
            scanf("%d",&arr[i]);
        int result=second_largest(arr,n);
        printf("Second Largest Element is:%d\n",result);
    }
    return 0;
}
int second_largest(int arr[],int n)
{
    int max,second_max;
    max=second_max=INT_MIN;
    for(int i=0; i<n; i++)
        if(arr[i]>max)
        {
            second_max=max;
            max=arr[i];
        }
        else if(arr[i]<max && arr[i]>second_max)
            second_max=arr[i];
    return second_max;
}