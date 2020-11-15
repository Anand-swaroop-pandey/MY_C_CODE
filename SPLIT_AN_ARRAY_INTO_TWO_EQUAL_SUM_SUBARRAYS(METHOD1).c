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
    int left_sum=0;
    for(int i=0; i<n; i++)
    {
        left_sum=left_sum+arr[i];
        int right_sum=0;
        for(int j=i+1; j<n; j++)
            right_sum=right_sum+arr[j];
        if(left_sum==right_sum)
            return i;
    }
    return -1;
}