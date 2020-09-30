#include <stdio.h>
int main()
{
    int num;
    printf("Enter a Number:\n");
    scanf("%d",&num);
    happy(num);
    return 0;
}
void happy(int num)
{
    int sum,temp=num,rem,sqr,flag=0;
    while(temp!=4 && temp!=16 && temp!=20 && temp!=37 && temp!=42 && temp!=58 && temp!=89 && temp!=145)
    {
        sum=0;
        while(temp!=0)
        {
            rem=temp%10;
            sqr=rem*rem;
            sum=sum+sqr;
            temp=temp/10;
        }
        if(sum==1)
        {
            flag=1;
            break;
        }
        else
            temp=sum;
    }
    if(flag==1)
        printf("%d is A happy number\n",num);
    else
        printf("%d is not A happy number\n",num);
}