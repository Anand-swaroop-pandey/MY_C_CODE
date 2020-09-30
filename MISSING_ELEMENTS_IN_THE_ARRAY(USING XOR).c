//you are given an array which contains element(integer) in the range of 1 to N,one element is missing in the array,there is no duplicate element in the array,find the missing number
//valid for both sorted and unsorted array
//ex-1,2,3,4,6(correct)
//ex-1,3,4,2,6(correct)
//ex-4,5,6,8,9(wrong)
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
    int result=missing_number(arr,n);
    printf("missing number is: %d\n",result);
    return 0;
}
int missing_number(int arr[],int n)
{
    int xor1=0;
    for(int i=0; i<n; i++)
        xor1=xor1^arr[i];
    int xor2=0;
    for(int i=1; i<=n+1; i++)//XOR of first n+1 natural number
        xor2=xor2^i;
    int missing_num=xor1^xor2;
    return missing_num;
}
/*
 * XOR table:
 * 0 ^ 0=0
 * 1^1=0
 * 0^1=1
 * 1^0=1
ex-
x1=1^2^4^5
x2=1^2^3^4^5
x1^x2=(1^1)^(2^2)^3^(4^4)^(5^5)  because (a^a=0)
              0^0^3^0^0                                 because (0^0=0)
              0^3^0                                           because (0^a=a)
              3^0                                               because (a^0=a)
              3 */