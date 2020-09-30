
#include<stdio.h>
int sum_of_numbers(int);
int main()
{
    int num;
    printf("Enter the limit upto which you want the sum of numbers:\n");
    scanf("%d",&num);
    int result=sum_of_numbers(num);
    printf("Printf sum of first %d natural numbers is %d\n",num,result);
}
int sum_of_numbers(int num)
{
    int sum=0;
    for(int i=1; i<=num; i++)
        sum=sum+i;
    return sum;
}