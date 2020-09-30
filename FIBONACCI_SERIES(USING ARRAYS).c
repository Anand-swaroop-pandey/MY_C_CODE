#include<stdio.h>
int fib(int);
int main()
{
    int num;
    printf("Enter the number of terms upto which you want fibonacci series:\n");
    scanf("%d",&num);
    if(num<0)
        printf("Invalid choice");
    else
    {
        printf("Fibonacci series upto %d terms is:\n",num);
        fibonacci(num);
    }
    return 0;
}
int fibonacci(int num)
{
    int fib[num+2];
    fib[0]=-1;
    fib[1]=1;
    for(int i=2; i<(num+2); i++)
    {
        fib[i]=fib[i-1]+fib[i-2];
        printf("%d\n",fib[i]);
    }
}