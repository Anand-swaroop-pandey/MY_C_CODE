#include<stdio.h>
int main()
{
    int num1,num2,i;
    printf("Enter two numbers:\n");
    scanf("%d%d",&num1,&num2);
    if(num1>0)                                                                                                                                  //num1=(num1>0)?num1: (-num1);
        num1=num1;
    else if(num1<0)
        num1=-num1;//if number is negative,negative sign is removed
    else if(num2>0)                                                                                                                                  //num2=(num2>0)?num2: (-num2);
        num2=num2;
    else
        num2=-num2;//if number is negative,negative sign is removed
    int min_num=minimum(num1,num2);
    int hcf=HCF(num1,num2,min_num);
    int lcm=LCM(num1,num2,hcf);
    printf("HCF of %d and %d is %d\n",num1,num2,hcf);
    printf("LCM of %d and %d is %d\n",num1,num2,lcm);
    return 0;
}
int minimum(int a,int b)
{
    if(a<b)
        return a;
    else
        return b;
}
int HCF(int num1,int num2,int min_num)
{
    int i;
    for(i=min_num; i>=1; i--)
        if(num1%i==0 && num2%i==0)
            break;
    return i;
}
int LCM(int num1,int num2,int hcf)
{
    int temp=(num1*num2)/hcf;                                                      //L.C.M=(num1*num2)/HCF
    return temp;
}