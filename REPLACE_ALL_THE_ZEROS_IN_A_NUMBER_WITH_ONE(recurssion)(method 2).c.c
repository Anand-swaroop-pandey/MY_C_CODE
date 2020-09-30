#include <stdio.h>
int main()
{
    int num;
    printf("Enter a number:\n");
    scanf("%d",&num);
    int result=check(num);
    printf("Number obtained after replacing all 0's with 1 is\n");
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
    if(num==0)
        return 0;
    else
    {
        int rem=num%10;
        if(rem==0)
            rem=1;
        return replace(num/10)*10+rem;
    }
}
