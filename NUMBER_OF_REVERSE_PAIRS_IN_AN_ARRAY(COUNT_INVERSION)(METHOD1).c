#include<stdio.h>
int main()
{
    int n;
    printf("Enter the size of the Arrray:\n");
    scanf("%d",&n);
    int arr[n];
    printf("Enter %d elements:\n",n);
    for(int i=0; i<n; i++)
        scanf("%d",&arr[i]);
    int count=reverse_pair_count(arr,n);
    printf("Number of reverse pairs in the given array are:%d\n",count);
    return 0;
}
int reverse_pair_count(int arr[],int n)
{
    int count=0;
    for(int i=0; i<n; i++)
        for(int j=i+1; j<n; j++)
            if(arr[i]>arr[j])
                count++;
    return count;
}