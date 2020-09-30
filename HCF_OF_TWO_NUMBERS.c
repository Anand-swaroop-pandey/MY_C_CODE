#include<stdio.h>
int main()
{
    int num1,num2,i;
    printf("Enter two numbers:\n");
    scanf("%d%d",&num1,&num2);
    int hcf= HCF(num1,num2);
    printf("HCF of %d and %d is %d\n",num1,num2,hcf);
}
int HCF(int num1,int num2)
{
    int min_num=num1<num2?num1:num2;
    int i;
    for(i=min_num; i>=1; i--)
        if(num1%i==0 && num2%i==0)
            break;
    return i;
}