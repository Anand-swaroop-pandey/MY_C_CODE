#include <stdio.h>
int main()
{
    int a,b;
    printf("Enter two numbers:\n");
    scanf("%d%d",&a,&b);
    int product= muntiply_bitwise(a,b);
    printf("Product of %d and %d is %d\n",a,b,product);
    return 0;
}
int muntiply_bitwise(int a,int b)
{
    int product=0;
    while(a!=0)
    {
        if(a % 2 == 1)
            product = product + b;
        a=a>> 1;
        b=b<< 1;
    }
    return  product;
}
