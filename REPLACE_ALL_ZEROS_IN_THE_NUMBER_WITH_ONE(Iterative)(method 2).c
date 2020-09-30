#include <stdio.h>
#include <conio.h>

int main()
{
    int num;
    printf("Enter a number:\n");
    scanf("%d",&num);
    printf("Number obtained after replacing all 0's with 1 is\n");
    int test=check(num);
    printf("%d",test);
    return 0;
}
int check(int num)
{
    int test;
    if(num==0)
        return 1;
    else
        test=replace(num);
    return test;
}
int replace(int num)
{
    int p_value=1,sum=0,rem;
    while(num != 0)
    {
        rem=num%10;
        if(rem==0)
            sum=sum+p_value*1;
        else
            sum = sum + rem*p_value;
        p_value= p_value*10;
        num=num/10;
    }
    return (sum);
}