#include <stdio.h>
int main()
{
    int n;
    printf("Enter the size of the Array:\n");
    scanf("%d",&n);
    int arr[n];
    printf("Enter %d elements:\n",n);
    for(int i=0; i<n; i++)
        scanf("%d",&arr[i]);
    int index=split_Array(arr,n);
    if(index==-1)
        printf("NOT_POSSIBLE");
    else
    {
        printf("( ");
        for(int i=0; i<=index; i++)
            printf("%d ",arr[i]);
        printf(")\n");
        printf("( ");
        for(int i=index+1; i<n; i++)
            printf("%d ",arr[i]);
        printf(")");
    }
    return 0;
}
int split_Array(int arr[],int n)
{
    int sum=0,left_sum=0;
    for(int i=0; i<n; i++)
        sum=sum+arr[i];
    for(int i=0; i<n; i++)
    {
        left_sum=left_sum+arr[i];
        sum=sum-arr[i];//right_sum
        if(left_sum==sum)
            return i;
    }
    return -1;
}
/*
 * { 1 , 2 , 3 , 4 , 5 , 5  }
 * { 4, 3, 2, 1}*/

