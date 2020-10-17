#include <stdio.h>
int main()
{
    int n;
    printf("Enter the size of the Array\n");
    scanf("%d",&n);
    int arr[n];
    printf("Enter %d elements:\n",n);
    for(int i=0; i<n; i++)
        scanf("%d",&arr[i]);
    two_repeating(arr,n);
    return 0;
}
void two_repeating(int arr[],int n)
{
    int s,p,d,repeat1,repeat2;
    int sum=((n-2)*(n-1))/2;//sum of first n-2 natural numbers
    int product=factorial(n-2);//product of first n-2 natural number
    int arr_sum=0,arr_product=1;
    for(int i=0; i<n; i++)
    {
        arr_sum=arr_sum+arr[i];
        arr_product=arr_product*arr[i];
    }
    s=arr_sum-sum;
    p=arr_product/product;
    d=sqrt((s*s)-(4*p));
    repeat1=(s+d)/2;
    repeat2=s-repeat1;
    printf("Two repeating Elements are: %d and %d\n",repeat1,repeat2);
}
int factorial(int num)
{
    int fact=1;
    for(int i=num; i>0; i--)
        fact=fact*i;
    return fact;
}
