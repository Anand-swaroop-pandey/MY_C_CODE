#include <stdio.h>
void Swap(int,int);
int main()//swapping without using third variable and by using  +  and  -  operator  only
{
    int a,b;
    printf("enter two numbers:\n");
    scanf("%d%d",&a,&b);
    printf("Numbers before swapping are %d and %d\n",a,b);
    Swap(a,b);//call by value
    return 0;
}
void Swap(int a,int b)
{
    a=a+b;
    b=a-b;
    a=a-b;
    printf("Numbers after swapping are: %d and %d \n",a,b);
}