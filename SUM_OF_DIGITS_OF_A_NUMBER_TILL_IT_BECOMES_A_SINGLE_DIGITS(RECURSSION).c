#include <stdio.h>
int main()
{
    int num;
    printf("Enter the Number:\n");
    scanf("%d",&num);
    int sum=sum_till_single_digits(num);
    printf("%d",sum);
    return 0;
}
int sum_till_single_digits(int num)
{
    if(num<10)
        return num;
    int sum=0;
    while(num!=0)
    {
        sum=sum+(num%10);
        num=num/10;
    }
    return  sum_till_single_digits(sum);
}
