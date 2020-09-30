#include <stdio.h>
void prime(int);
int main()
{
    //positive number which is completelydivisible by 1 and itself is called as prime number
    int num;//negative numbers can never be a prime number
    printf("Enter a positive number to check for Prime:\n");
    scanf("%d",&num);
    if(num<0)
        printf("invalid choice");
    else
        prime(num);
    return 0;
}
void prime(int num)
{
    int count=0;
    for(int i=1; i<=num; i++) //number cant be completely divisible by a number greater than itself
        if(num%i==0)
            count++;
    if(count==2)
        printf("%d is  prime number",num);
    else
        printf("%d is  not prime number",num);
}