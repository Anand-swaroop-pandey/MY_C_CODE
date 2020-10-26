#include <stdio.h>
int main()
{
    int a,b;
    printf("Enter two numbers:\n");
    scanf("%d%d",&a,&b);
    int sum=add(a,b);
    printf("Sum of %d and %d is %d",a,b,sum);
    return 0;
}
int add(int a, int b)
{
    if(a>0)
        while(a != 0)
        {
            b++;
            a--;
        }
    else if(a<0)
        while(a != 0)
        {
            b--;
            a++;
        }
    return b;
}