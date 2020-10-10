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
    int temp=num;
    while(temp>10)
    {
        int sum=0;
        while(temp!=0)
        {
            sum=sum+(temp%10);
            temp=temp/10;
        }
        temp=sum;
    }
    return temp;
}
