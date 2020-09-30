//you are given an sorted array which contains element(integer)  from 1 to N,one element is missing in the array,there is no duplicate element in the array,find the missing number
//valid for sorted array only
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
    printf("Enter %d elements starting from 1:\n",n);
    for(int i=0; i<n; i++)
        scanf("%d",&arr[i]);
    int result=missing_number_sorted(arr,n);
    printf("missing number is: %d\n",result);
    return 0;
}
int missing_number_sorted(int arr[],int n)//linear search
{
    int i;
    for(i=0; i<n; i++)
        if(arr[i]!=(i+1))
            break;
    return (i+1);
}
