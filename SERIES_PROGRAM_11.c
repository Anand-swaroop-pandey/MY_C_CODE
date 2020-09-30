//Program to find the sum of series x + x/2! + x/4! + ... + x/n! in C
#include<stdio.h>
int main()
{
    int x,n,count=0;
    float sum=0;
    printf("Enter the value of X:\n");
    scanf("%d",&x);
    if(x<=0)
        return;
    printf("Enter the number of terms upto which you find the sum of the series:\n");
    scanf("%d",&n);
    for(int i=1; i<=n; i++)
    {
        sum=sum+(float)x/fact(count);
        count=count*2;
    }
    printf("Sum of Series upto %d terms is %0.2f\n",n,sum);
}
int fact(int num)
{
    int factorial=1;
    for(int i=num; i>0; i--)
        factorial=factorial*i;
    return factorial;
}