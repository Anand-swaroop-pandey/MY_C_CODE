#include <stdio.h>
int main()
{

    int n;
    printf("How many palindrome numbers do you want:\n");
    scanf("%d",&n);
    if(n<0)
        printf("invalid choice");
    else
    {
        printf("First %d palindrome numbers are:\n",n);
        palindrome(n);
    }
    return 0;
}

int  palindrome(int n)
{
    int count=0,num=0,rev,rem,temp;
    while(1)
    {
        rev=0;
        temp=num;
        while(temp!=0)
        {
            rem=temp%10;//gives remainder
            rev=rev*10+rem;
            temp=temp/10;//gives remaining number after every operation
        }
        if(rev==num)
        {
            printf("%d\n",num);
            count++;
        }
        if(count==n)
            break;
        else
            num++;
    }
}