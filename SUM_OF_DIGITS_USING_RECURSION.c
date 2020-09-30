#include <stdio.h>
int main()
{
    int num;
    printf("enter a number:\n");
    scanf("%d",&num);
    int result= Sum_digits(num,0);
    printf("sum of digits of the %d is: %d\n",num,result);
    return 0;
    
}
int Sum_digits(int num,int sum)
{
    if(num==0)
        return sum;
    else
    {
     //   sum=sum+(num%10);
     //   num=num/10;
        return Sum_digits(num/10,sum+(num%10));
    }
}