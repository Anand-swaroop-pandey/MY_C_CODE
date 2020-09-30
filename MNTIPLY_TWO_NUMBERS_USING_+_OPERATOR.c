#include <stdio.h>
int main()
{
    int num1,num2,sum=0;
    printf("Enter first number:\n");
    scanf("%d",&num1);
    printf("Enter first number:\n");
    scanf("%d",&num2);
    for(int i=0; i<num2; i++)
        sum=sum+num1;
    printf("Product of %d and %d is: %d\n",num1,num2,sum);
    return 0;
}