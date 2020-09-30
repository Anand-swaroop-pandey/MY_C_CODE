#include <stdio.h>
int next_prime(int);
int  check_prime(int);
int main()
{
    int num;
    printf("Enter the number:\n");
    scanf("%d",&num);
    int i=2;
    while(i<=num-i)
    {
        int n=check_prime((num-i));
        if(n==1)
        {
            printf("%d + %d = %d\n",i,num-i,num);
        }
        i= next_Prime(i);
    }
    
    return 0;
}
int check_prime(int num)
{
    int count=0;
    for(int i=1; i<=num; i++) //number cant be completely divisible by a number greater than itself
        if(num%i==0)
            count++;
    if(count==2)
        return 1;
    else
        return 0;
}
int next_Prime(int num)
{
    while(1)
    {
        num++;
        int count=0;
        for(int i=1; i<=num; i++)
        {
            if(num%i==0)
                count++;
        }
        if(count==2)
            break;
    }
    return num;
}