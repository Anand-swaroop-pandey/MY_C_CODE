//Given the series 1 -2+3-4+5-6+7-8 ... N terms, and we have to find the sum of all values using C program.
#include<stdio.h>
int main()
{
    int n, sum=0;
    printf("Enter the value of N:\n");
    scanf("%d",&n);
    if(n<=0)
        return 0;
    if(n%2==0)
    {
    	sum=-(n/2);
        printf("Sum of series upto %d terms is %d\n",n,sum);
    }
    else
    {
        sum=(n+1)/2;
        printf("Sum of series upto %d terms is %d\n",n,sum);
    }
    return 0;
}