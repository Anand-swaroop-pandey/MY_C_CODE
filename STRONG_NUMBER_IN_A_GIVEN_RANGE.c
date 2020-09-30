#include<stdio.h>
int main()
{
    int low,high;
    printf("Enter low value:\n");
    scanf("%d",&low);
    printf("Enter high value:\n");
    scanf("%d",&high);
    if(low>high)
    {
        int temp=low;
        low=high;
        high=temp;
    }
    for(int i=(low+1); i<high; i++)
        strong(i);
    return 0;
}

void strong(int num)
{
    int last,f,sum=0;
    int temp=num;
    while(temp!=0)
    {
        last=temp%10;
        f= factorial(last);
        sum=sum+f;
        temp=temp/10;
    }
    if(sum==num)
        printf("\n%d\n",num);
}
int factorial(int num)
{
    int fact=1;
    for(int i=1; i<=num; i++)
        fact=fact*i;
    return fact;
}