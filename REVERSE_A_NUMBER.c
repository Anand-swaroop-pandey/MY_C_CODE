#include <stdio.h>
int reverse(int);
int main()
{
    int num;
    printf("Enter a number:\n");
    scanf("%d",&num);
    int result=reverse(num);
    printf("%d is reverse of %d",result,num);
    return 0;
}
int reverse(int num)
{
    int rev=0,rem;
    while(num!=0)
    {
        rem=num%10;//gives remainder
        rev=rev*10+rem;
        num=num/10;//gives remaining number after every operation
    }
    return rev ;
}