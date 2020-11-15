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
    int index=equilibrium(arr,n);
    if(index==-1)
        printf("NOT_POSSIBLE");
    else
    {
        printf("Array can divided into two equal sum subarrays,on removing Element present at %d index\n",index);
        printf("( ");
        for(int i=0; i<index; i++)
            printf("%d ",arr[i]);
        printf(")\n");
        printf("( ");
        for(int i=index+1; i<n; i++)
            printf("%d ",arr[i]);
        printf(")");
    }
    return 0;
}
int equilibrium(int arr[],int n)
{
    for(int i=0; i<n; i++)
    {
        int left_sum=0;
        int right_sum=0;
        for(int j=0; j<i; j++)
            left_sum=left_sum+arr[j];
        for(int k=i+1; k<n; k++)
            right_sum=right_sum+arr[k];
        if(right_sum==left_sum)
            return i;
    }
    return -1;
}