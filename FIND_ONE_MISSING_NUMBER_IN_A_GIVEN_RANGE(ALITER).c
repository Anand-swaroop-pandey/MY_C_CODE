/*Given an array of size n. It is also given that range of numbers is from smallestNumber to smallestNumber + n
 *  where smallestNumber is the smallest number in array.
 * The array contains number in this range but one number is missing so the task is to find this missing number.*/
#include <stdio.h>
int main()
{
    int n;
    printf("Enter the size of the array:\n");
    scanf("%d",&n);
    int arr[n];
    printf("Enter %d elements:\n",n);
    for(int i=0; i<n; i++)
        scanf("%d",&arr[i]);
    printf("Missing Elements is:\n");
    missing_range(arr,n);
    return 0;
}
void missing_range(int arr[],int n)
{
    int min=smallest(arr,n);
    int xor1=0;
    for(int i=0; i<n; i++)
        xor1=xor1^arr[i];
    int xor2=0;
    for(int i=min; i<=min+n; i++)
        xor2=xor2^i;
    int missing_num=xor1^xor2;
    printf("%d",missing_num);
}
int smallest(int arr[],int n)
{
    int min=arr[0];
    for(int i=1; i<n; i++)
        if(arr[i]<min)
            min=arr[i];
    return min;
}
