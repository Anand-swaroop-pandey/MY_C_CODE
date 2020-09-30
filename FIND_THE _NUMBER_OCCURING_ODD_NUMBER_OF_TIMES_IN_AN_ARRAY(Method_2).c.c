//Given an array of positive integers. All numbers occur even number of times except one number which occurs odd number of times. Find the number
#include <stdio.h>
int main()
{
    int n;
    printf("Enter the size of the array\n");
    scanf("%d",&n);
    int arr[n];
    printf("Enter %d elements\n",n);
    for(int i=0; i<n; i++)
        scanf("%d",&arr[i]);
    int result=find_an_element_occuring_odd_number_of_times(arr,n);
    printf("Number ocurring odd number of times is:%d\n",result);
    return 0;
}
int find_an_element_occuring_odd_number_of_times(int arr[],int n)
{
    int result=arr[0];
    for(int i=1; i<n; i++)
        result=result^arr[i];
    return result;
}