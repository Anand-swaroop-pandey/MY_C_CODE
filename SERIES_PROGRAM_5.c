//Find the sum of given series-1 + 3^2/3^3 + 5^2/5^3 + 7^2/7^3 + ... till N terms
#include<stdio.h>
int main()
{
    int n,count=1;
    float sum=0;
    printf("Enter the value of N:\n");
    scanf("%d",&n);
    if(n<=0)
        return 0;
    for(int i=1; i<=n; i++)
    {
        sum=sum+(float)(count*count)/(count*count*count);
        count=count+2;
    }
    printf("Sum of series upto %d terms is %0.2f\n",n,sum);
    return 0;
}