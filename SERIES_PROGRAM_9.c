//Program to find the sum of series 1^2/1! + 2^2/2! + 3^2/3! + 4^2/4! + ... n^2/n!
#include <stdio.h>
int main()
{
    int n;
    float sum=0;
    printf("Enter the value of N:\n");
    scanf("%d",&n);
    if(n<0)
        return;
    for(int i=1; i<=n; i++)
    	sum=sum+(float)(i*i)/(float)fact(i);
    printf("Sum of series upto %d terms is %0.2f\n",n,sum);
    return 0;
}
int fact(int num)
{
    int factorial=1;
    for(int i=num; i>0; i--)
        factorial=factorial*i;
    return factorial;
}