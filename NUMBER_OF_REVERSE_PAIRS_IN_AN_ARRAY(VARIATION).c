/*Objective: Given an array of integers A[] which is sorted in two parts
 *  (both parts are individually sorted),
 * find no of reverse pairs means no of (i, j) 
 * pairs where i belongs to the part one and j belongs to part 2 and A[i]>A[j].*/
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
    int mid,inversion_count=0;
    for(int i=0; i<n; i++)
        if(arr[i]>arr[i+1])
        {
            mid=i;
            break;
        }
    int i=0,j=mid+1;
    while(i <= mid && j <=n-1)
        if(arr[i] <= arr[j])
            i++;
        else
        {
            j++;
            inversion_count=inversion_count+ (mid - i+1);
        }
    return inversion_count;
}