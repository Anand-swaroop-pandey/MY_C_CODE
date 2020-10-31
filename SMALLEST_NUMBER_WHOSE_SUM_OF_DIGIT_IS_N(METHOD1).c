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
    int num=1;
    while(1)
    {
        if(sum_digits(num)==n)
            return num;;
        num++;
    }
}
int sum_digits(int num)
{
    int sum=0;
    while(num!=0)
    {
        int last=num%10;
        sum=sum+last;
        num=num/10;
    }
    return sum;
}
