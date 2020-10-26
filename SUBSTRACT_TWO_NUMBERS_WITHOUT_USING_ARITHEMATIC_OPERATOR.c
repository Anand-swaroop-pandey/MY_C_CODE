#include <stdio.h>
int main()
{
    int a,b;
    printf("Enter two numbers:\n");
    scanf("%d%d",&a,&b);
    int diff=substract(a,b);
    printf("Difference of %d and %d is %d",a,b,diff);
    return 0;
}
int substract(int a, int b)
{
    while(b != 0)
    {
        int borrow= (~a)& b;
        a= a ^ b;
        b= borrow<< 1;
    }
    return a;
}