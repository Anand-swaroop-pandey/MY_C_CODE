// find the sum of-1^2+2^2+3^2+4^2+..N^2
#include <stdio.h>
int main()
{
    int n,sum=0;
    printf("Enter the value of N:\n");
    scanf("%d",&n);
    if(n<=0)
        return;
    for(int i=1; i<=n; i++)
        sum=sum+i*i;
    printf("Sum of Given Series upto %d terms  is: %d\n",n,sum);
    return 0;
}