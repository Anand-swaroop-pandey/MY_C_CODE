#include <stdio.h>
int main()
{
    int num1,num2;
    printf("Enter two numbers:\n");
    scanf("%d%d",&num1,&num2);
    int lcm= LCM(num1,num2);
    printf("L.C.M of two numbers is : %d\n",lcm);
    return 0;
}
int LCM(int num1,int num2)
{
    int max_num=num1>num2?num1:num2;
    int temp=max_num;
    while(1)
    {
        if(max_num % num1==0 && max_num % num2==0)
            break;
        max_num=max_num+temp;
    }
    return max_num;
}