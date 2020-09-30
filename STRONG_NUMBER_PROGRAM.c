#include <stdio.h>
int main()//A number can be said as a strong number when the sum of the factorial of the individual digits is equal to the number.For example, 145 is a strong number.
{
    int num;
    printf("Enter A number:\n");
    scanf("%d",&num);
    int result= strong(num);
    if(result==num)
        printf("%d is a strong umber:\n",num);
    else
        printf("%d is not a strong umber:\n",num);
    return 0;
}
int strong(int num)
{
    int last,f,sum=0;
    while(num!=0)
    {
        last=num%10;
        f= factorial(last);
        sum=sum+f;
        num=num/10;
    }
    return sum;
}
int factorial(int num)
{
    int fact=1;
    for(int i=1; i<=num; i++)
        fact=fact*i;
    return fact;
}