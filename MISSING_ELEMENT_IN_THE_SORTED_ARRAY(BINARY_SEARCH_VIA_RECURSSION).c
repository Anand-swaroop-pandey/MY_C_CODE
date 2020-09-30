//you are given an sorted array which contains element(integer) from 1 to N
//one element is missing in the array,there is no duplicate element in the array
//find the missing number
//ex-1,2,3,5,6
//ex-2,3,4,5,6
//ex-1,2,3,5,6
#include <stdio.h>
int main()
{
    int n;
    printf("Enter the size of the array:\n");
    scanf("%d",&n);
    int arr[n];
    printf("Enter %d elements:\n",n);//numbers should be consecutive
    for(int i=0; i<n; i++)
        scanf("%d",&arr[i]);
    int result=missing_number_sorted(arr,0,n-1);
    if(result==-1)
        printf("missing number is not found");
    else
        printf("missing number is: %d\n",result);
    return 0;
}
int missing_number_sorted(int arr[], int low,int high)//binary search
{
    if(low<= high)
    {
        int mid = (low+ high) / 2;
        if(arr[mid] != mid + 1&& arr[mid - 1] == mid)
            return mid + 1;
        if(arr[mid]== mid + 1)
            return missing_number_sorted(arr,mid+1,high);
        else  if(arr[mid] != mid + 1&& arr[mid - 1] != mid)
            return missing_number_sorted(arr,low,mid-1);
    }
    return -1;
}