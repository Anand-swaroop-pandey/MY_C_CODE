
#include<stdio.h>
int sum_of_numbers(int);
int main()
{
    int n;
    printf("Enter the limit upto which you want the sum of numbers:\n");
    scanf("%d",&n);
    int result=sum_of_numbers(n);
    printf("sum of first %d natural numbers is %d\n",n,result);
}
int sum_of_numbers(int n)
{
    if(n==0)
        return n;
    else
    return n+ sum_of_numbers(n-1);
}