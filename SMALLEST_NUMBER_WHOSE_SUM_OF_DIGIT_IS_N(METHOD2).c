#include <stdio.h>
int main()
{
    int n;
    printf("enter the value of N\n");
    scanf("%d",&n);
    int num=smallest_number_sum(n);
    printf("Smallest number whose sum of digit is %d is %d\n",n,num);
    return 0;
}
int smallest_number_sum(int n)
{
    int num=(n% 9 + 1) * power(10,n/9)-1;
    return num;
}
int power(int num,int exp)
{
    int p=1;
    for(int i=0; i<exp; i++)
        p=p*num;
    return p;
}