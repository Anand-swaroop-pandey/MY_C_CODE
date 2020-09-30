#include <stdio.h>
int LCM(int,int);
int main()
{
    int num1,num2,lcm;
    printf("Enter two numbers:\n");
    scanf("%d%d",&num1,&num2);
    if(num1>num2)
        lcm= LCM(num1,num2);
    else
        lcm= LCM(num2,num1);
    printf("L.C.M of two numbers is : %d\n",lcm);
    return 0;
}
int LCM(int num1,int num2)
{
    static int temp=0;
    temp=temp+num1;
    if(temp % num1==0 && temp % num2==0)
        return temp;
    else
        return LCM(num1,num2);
}