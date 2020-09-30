//C program to calculate the sum of the series 1+(1+2) +(1+2+3) +(1+2+3+4) +...+(1+2+3+...+n)
#include<stdio.h>
int main()
{
    int n,sum=0;
    printf("Enter the value of N:\n");
    scanf("%d",&n);
    if(n<=0)
        return;
    for(int i=1; i<=n; i++)
    {
        int temp=i*(i+1)/2;
        sum=sum+temp;
    }
    printf("Sum of series upto %d terms is %d\n",n,sum);
}