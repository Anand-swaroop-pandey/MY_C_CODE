#include <stdio.h>
int main()
{
    int n;
    printf("Enter N:\n");
    scanf("%d",&n);
    if(n==0)
        return;
    else
        Sum_First_N_Natural_Numbers(n);
    return 0;
}
void Sum_First_N_Natural_Numbers(int n)
{
    int sum=0;
    for(int i=1; i<=n; i++)
        sum=sum+i;
    printf("Sum of First %d Natural Numbers is %d\n",n,sum);
}