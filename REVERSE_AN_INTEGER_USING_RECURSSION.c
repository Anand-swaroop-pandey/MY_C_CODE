#include <stdio.h>
int reverse(int,int);
int main()
{
    int num;
    printf("Enter a number:\n");
    scanf("%d",&num);
    int result=reverse(num,0);
    printf("%d is reverse of %d",result,num);
    return 0;
}
int reverse(int num,int rev)
{
    int rem;
    if(num==0)
        return rev;
    else
    {
        rem=num%10;//gives remainder
        rev=rev*10+rem;
        num=num/10;//gives remaining number after every operation
        return  reverse(num,rev);
    }
}