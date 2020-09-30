#include <stdio.h> 
int main()
{
    int num,test;
    printf("Enter a Number:\n");
    scanf("%d",&num);
    test=check_perfect(num);
    if(test==num)
        printf("%d is perfect number\n",num);
    else
        printf("%d is not a perfect number",num);
    return 0;
}
int check_perfect(int num)
{
    int sum=0;
    for(int i=1; i<=num/2; i++)
        if(num%i==0)
            sum=sum+i;
    return sum;
}