#include <stdio.h>
int main()// A positive integer which is divisible by the sum of its digits  is called as "Harshad Number"/Niven number.
{
    int num;
    printf("Enter a number;\n");
    scanf("%d",&num);
    int test=check_Harshad(num);
    if(test==1)
        printf("%d is Harshad number:\n",num);
    else
        printf("%d is not a Harshad number:\n",num);
    return 0;
}
int check_Harshad(int num)
{
    int temp=num;
    int sum=0;
    while(temp!=0)
    {
        int rem=temp%10;
        sum=sum+rem;
        temp=temp/10;
    }
    int result=num%sum;
    if(result==0)
        return 1;
    else
        return 0;
}