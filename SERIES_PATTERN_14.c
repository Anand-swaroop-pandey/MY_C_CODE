//C program to calculate sum of the series 1 + 11 + 111 + 1111 + ... N terms
#include<stdio.h>
int main()
{
    int n, sum=0,temp=1;;
    printf("Enter the value of N:\n");
    scanf("%d",&n);
    if(n<=0)
        return;
    for(int i=1; i<=n; i++)
    {
        sum=sum+temp;
        temp=temp*10+1;
    }
    printf("sum of series upto %d terms are %d\n",n,sum);
    return 0;
}