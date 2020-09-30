#include <stdio.h>
int main()
{
    int a,b;
    printf("Enter two numbers:\n");
    scanf("%d%d",&a,&b);
    printf("Number before swapping are %d and %d\n",a,b);
    Swap(a,b);//call by value
    return 0;
}
void Swap(int a,int b)
{
    int temp;
    temp=a;
    a=b;
    b=temp;
    printf("Number after swapping are %d and %d",a,b);
}