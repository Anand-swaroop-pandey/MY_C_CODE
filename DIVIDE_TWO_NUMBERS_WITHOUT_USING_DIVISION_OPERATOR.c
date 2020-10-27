#include <stdio.h>
int main()
{
    int dividend,divisor;
    printf("Enter Dividend:\n");
    scanf("%d",&dividend);
    printf("Enter divisor:\n");
    scanf("%d",&divisor);
    divide(dividend,divisor);
    return 0;
}
void divide(int dividend, int divisor)
{
    if(divisor == 0)
    {
        printf("Error\n");
        return;
    }
    int sign;
    if(dividend * divisor < 0)
        sign = -1;
    else if(dividend * divisor > 0)
        sign = 1;
    dividend = abs(dividend);
    divisor= abs(divisor);
    int quotient=0;
    while(dividend >= divisor)
    {
        dividend= dividend - divisor;
        quotient++;
    }
    printf("Quotient is %d\n",sign * quotient);
    printf("Remainder is %d\n", divisor);
    return;
}
