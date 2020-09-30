//find the sum-1+2+3+4+......n
#include <stdio.h>
int main()
{
    int n,sum=0;
    printf("Enter the value of N:\n");
    scanf("%d",&n);
    if(n<=0)
        return;
    for(int i=1; i<=n; i++)
        sum=sum+i;
    printf("Sum of first %d natural number is: %d\n",n,sum);
    return 0;
}