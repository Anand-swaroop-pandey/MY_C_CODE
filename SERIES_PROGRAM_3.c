// find the sum upto N terms-1/1! + 2/2! + 3/3! + 4/4! + ... N/N!
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
        sum=sum+(float)i/fact(i);
    printf("Sum of Given Series upto %d terms  is: %0.2f\n",n,sum);
    return 0;
}
int fact(int num)
{
    int f=1;
    for(int i=num; i>0; i--)
        f=f*i;
    return f;
}