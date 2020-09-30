/*
 You are given a list of n-1 integers and these integers are in the range of 1 to n.
There are no duplicates in the list. One of the integers is missing in the list.
Write an efficient code to find the missing integer.
 */
//ex-1,2,3,4,6
//ex-1,3,4,2,6
//ex-3,4,1,2,6
#include<stdio.h>
int main()
{
    int n;
    printf("Enter the size of the Array:\n");
    scanf("%d",&n);
    int arr[n];
    printf("Enter %d elements:\n",n);
    for(int i=0; i<n; i++)
        scanf("%d",&arr[i]);
    int result=missing_number(arr,n);
    printf("Missing number is %d\n",result);
    return 0;
}
int missing_number(int arr[],int len)
{
    int no_exp_len=len+1;
    int exp_sum=(no_exp_len)*(no_exp_len+1)/2;
    int actual_sum=0;
    for(int i=0; i<len; i++)
        actual_sum=actual_sum+arr[i];
    int miss_no=exp_sum-actual_sum;
    return miss_no;
}
