#include <stdio.h>
int main()
{
    int num;
    printf("Enter a number:\n");
    scanf("%d",&num);
    printf("Number obtained after replacing all 0's with 1 is\n");
    int result=check(num);
    printf("%d",result);
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
    static int p_value=1,sum=0;
    if(num==0)
        return sum;
    else
    {
        int rem=num%10;
        if(rem==0)
            sum=sum+p_value*1;
        else
            sum=sum+p_value*rem;
        p_value=p_value*10;
        return replace(num/10);
    }
}
