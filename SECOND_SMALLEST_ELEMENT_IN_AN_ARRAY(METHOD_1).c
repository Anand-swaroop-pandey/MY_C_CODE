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
        int result=second_smallest(arr,n);
        printf("Second smallest Element is:%d\n",result);
    }
    return 0;
}
int second_smallest(int arr[],int n)
{
    int min,second_min;
    min=second_min=INT_MAX;
    for(int i=0; i<n; i++)
        if(arr[i]<min)
        {
            second_min=min;
            min=arr[i];
        }
        else if(arr[i]>min&& arr[i]<second_min)
            second_min=arr[i];
    return second_min;
}