#include <stdio.h>
int reverse(int);
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
    int count=0,rev,rem;
    while(count<2)
    {
        rev=0;
        while(num!=0)
        {
            rem=num%10;
            if(rem==0)
                rem=1;
            rev=rev*10+rem;
            num=num/10;
        }
        count++;
        num=rev;
    }
    return rev ;
}