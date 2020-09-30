//C program to find the sum of series 1.2/3 + 2.3/4 + 3.4/5 + 4.5/6 + ... + n(n +1)/(n+2).
#include <stdio.h>
int main()
{
    int n;
    float sum=0;
    printf("Enter the value of N:\n");
    scanf("%d",&n);
    if(n<=0)
        return;
    for(int i=1; i<=n; i++)
        sum=sum+(float)(i*(i+1))/(i+2);
    printf("Sum of series upto %d terms is %0.2f\n",n,sum);
    return 0;
}