#include<stdio.h>
int main()
{
    int num;
    printf("Enter the limit upto which you want to print the Sum:\n");
    scanf("%d",&num);
    int  sum=(num*(num+1))/2;
    printf("Sum is %d\n",sum);
    return 0;
}