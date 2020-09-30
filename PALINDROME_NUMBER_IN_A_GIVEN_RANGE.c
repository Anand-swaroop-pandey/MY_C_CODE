#include <stdio.h>
int main()
{
    int low,high;
    printf("Enter Low limit:\n");
    scanf("%d",&low);
    printf("Enter High limit:\n");
    scanf("%d",&high);
    if(low>high)
    {
        int temp=low;
        low=high;
        high=temp;
    }
    printf("Palindrome number in between %d and %d are:\n",low,high);
    for(int i=(low+1); i<high; i++)
        palindrome(i);
    return 0;
}

int  palindrome(int num)
{
    int rev=0,rem;
    int temp=num;
    while(temp!=0)
    {
        rem=temp%10;//gives remainder
        rev=rev*10+rem;
        temp=temp/10;//gives remaining number after every operation
    }
    if(rev==num)
        printf("%d\n",num);
}