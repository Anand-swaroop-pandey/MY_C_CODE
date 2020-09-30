#include <stdio.h>
int main()
{
    int num;
    printf("enter a number:\n");
    scanf("%d",&num);
    int sum= Sum_digits(num);
    printf("sum of digits of the number is: %d\n",sum);
    return 0;
}
int Sum_digits(int num)
{
    int sum=0,rem;
    while(num!=0)
    {
        rem=num%10;
        sum=sum+rem;
        num=num/10;
    }
    return sum;
}