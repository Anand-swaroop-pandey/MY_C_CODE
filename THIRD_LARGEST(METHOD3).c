#include<stdio.h>
#include<limits.h>
int main()
{
    int n;
    printf("Enter the Size of the array:\n");
    scanf("%d",&n);
    int arr[n];
    printf("Enter %d elements:\n",n);
    for(int i=0; i<n; i++)
        scanf("%d",&arr[i]);
    int third=third_Largest(arr,n);
    printf("The third Largest element is %d\n", third);
}
int third_Largest(int arr[], int n)
{
    if(n< 3)
    {
        printf(" Invalid Input ");
        return;
    }
    int first = INT_MIN;
    int second = INT_MIN;
    int third = INT_MIN;
    for(int i = 0; i < n ; i ++)
    {
        if(arr[i] > first)
        {
            third  = second;
            second = first;
            first  = arr[i];
        }
        else if(arr[i] > second)
        {
            third = second;
            second = arr[i];
        }
        else if(arr[i] > third)
            third = arr[i];
    }
    return third;
}
