#include <stdio.h>
int main()//A number can be said as a strong number when the sum of the factorial of the individual digits is equal to the number.For example, 145 is a strong number.
{
    int N;
    printf("Enter the value of N:\n");
    scanf("%d",&N);
    if(N<=0)
        return -1;
    else
    {
        printf("First %d strong numbers are:\n",N);
        N_strong(N);
    }
    return 0;
}
void N_strong(int n)
{
    int count=0,rem,fact,sum,temp,num=0;
    while(1)
    {
        sum=0;
        temp=num;
        while(temp!=0)
        {
            rem=temp%10;
            fact= factorial(rem);
            sum=sum+fact;
            temp=temp/10;
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
int factorial(int num)
{
    int fact=1;
    for(int i=1; i<=num; i++)
        fact=fact*i;
    return fact;
}