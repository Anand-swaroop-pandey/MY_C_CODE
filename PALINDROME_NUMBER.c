#include <stdio.h>
int palindrome(int);
int main()
{
    int num;
    printf("Enter a number:\n");
    scanf("%d",&num);
    int n=  palindrome(num);
    if(n==num)
        printf("%d is palindrome number",num);
    else
        printf("%d is not a palindrome number",num);
    return 0;
}
int  palindrome(int num)
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