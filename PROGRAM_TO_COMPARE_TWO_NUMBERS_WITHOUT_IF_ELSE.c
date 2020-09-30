#include <stdio.h>
int main()
{
    int a,b;
    printf("Enter two numbers:\n");
    scanf("%d%d",&a,&b);
    int num=a>b?printf("%d is greater than %d\n",a,b):printf("%d is greater than %d\n",b,a);
    return 0;
}