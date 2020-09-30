#include<stdio.h>
int HCF(int,int);
int main()
{
    int num1,num2,hcf;
    printf("Enter two numbers:\n");
    scanf("%d%d",&num1,&num2);
    hcf=  HCF(num1,num2);
    printf("HCF of %d and %d is %d\n",num1,num2,hcf);
}
int HCF(int num1,int num2)
{
    static int i=-1;
    int min_num=num1<num2?num1:num2;
    int temp=min_num-(++i);
    if(num1%temp==0 && num2%temp==0)
        return temp;
    else
        return HCF(num1,num2);
}