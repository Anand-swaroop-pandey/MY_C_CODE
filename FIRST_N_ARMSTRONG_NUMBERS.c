#include <stdio.h>
int power(int,int);
int digit(int);
int main()
{
    int n;
    printf("Enter N:\n");
    scanf("%d",&n);
    printf("First %d Armstrong Numbers are:\n",n);
    N_armstrong(n);
    return 0;
}
void N_armstrong(int n)
{
    int rem,sum,digits,temp,num=0,count=0;
    while(1)
    {
        sum=0;
        temp=num;
        digits=digit(temp);
        while(temp!=0)
        {
            rem=temp%10;//gives remainder
            rem= power(rem,digits);
            sum=sum+rem;
            temp=temp/10;//gives remaining number after every operation
        }
        if(sum==num)
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
int power(int r,int d)
{
    int p=1;
    for(int i=0; i<d; i++)
    {
        p=p*r;
    }
    return p;
}
int digit(int temp)//gives the number of digits the particular number posseses
{
    int count=0;
    while(temp!=0)
    {
        count++;
        temp=temp/10;
    }
    return count;
}