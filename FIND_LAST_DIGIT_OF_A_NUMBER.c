#include <stdio.h>
int main()
{
    int num;
    printf("Enter a number:\n");
    scanf("%d",&num);
    int result= Last_digit(num);
    printf("Last digit of %d is %d\n",num,result);
    return 0;
}
int  Last_digit(int num)
{
    int last;
    last=num%10;
    return last;
}