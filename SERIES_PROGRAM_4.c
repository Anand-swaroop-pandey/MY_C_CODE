//  find the Sum of ythe series upto N terms-1+ 1/2 + 1/3 + 1/4 + 1/5 + .. 1/N
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
        sum=sum+((float)1/i);
    printf("Sum of Given Series upto %d terms  is: %0.2f\n",n,sum);
    return 0;
}