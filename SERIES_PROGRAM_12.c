//Program to find the sum of the series 1^3 -2^3 + 3^3 - 4^3 + ... N^3 in C
#include <stdio.h>
int main()
{
    int n,sum=0;
    printf("Enter the value of N:\n");
    scanf("%d",&n);
    if(n<=0)
        return;
    for(int i=1; i<=n; i++)
        if(i%2!=0)
            sum=sum+(i*i*i);
        else
            sum=sum-(i*i*i);
    printf("sum of series upto %d terms is %d\n",n,sum);
    return 0;
}