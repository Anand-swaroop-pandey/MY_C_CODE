//Program to calculate sum of series 1 +1/x^1 + 1/x^2 + 1/x^3 ... + 1/x^n terms in C
#include <stdio.h>
#include<math.h>
int main()
{
    int x,n,count=0;
    float sum=0;
    printf("Enter value of X:\n");
    scanf("%d",&x);
    if(x<=0)
        return;
    printf("Enter the number of terms upto which you want to find the sum of series:\n");
    scanf("%d",&n);
    if(n<=0)
        return ;
    for(int i=1; i<=n; i++)
    {
        sum=sum+1/pow(x,count);
        count++;
    }
    printf("Sum of series upto %d terms is %0.2f\n",n,sum);
    return 0;
}