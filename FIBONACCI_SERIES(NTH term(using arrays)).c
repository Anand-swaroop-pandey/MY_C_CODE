#include <stdio.h>
int fib(int);
int main()
{
    int num;
    printf("enter the length of the fibonacci series\n");
    scanf("%d",&num);
    if(num<0)
        printf("invalid choice");
    else
        printf("number at %d position is %d:",num,fib(num));
    return 0;
}
int fib(int num)
{
    int fib[num+2];
    fib[0]=-1;
    fib[1]=1;
    for(int i=2; i<(num+2); i++)
        fib[i]=fib[i-1]+fib[i-2];
    return fib[num+1];
}