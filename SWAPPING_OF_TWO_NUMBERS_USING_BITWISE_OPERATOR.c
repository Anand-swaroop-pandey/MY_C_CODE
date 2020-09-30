#include <stdio.h>
int main()
{
    int a,b;
    printf("Enter two numbers:\n");
    scanf("%d%d",&a,&b);
    printf(" before swapping: value of First number=%d  and Second number=%d\n", a, b);
    a= a ^ b;
    b= a ^ b;
    a = a ^ b;
    printf(" after swapping: value of first number=%d  and  second number=%d\n", a, b);
    return 0;
}
void swap