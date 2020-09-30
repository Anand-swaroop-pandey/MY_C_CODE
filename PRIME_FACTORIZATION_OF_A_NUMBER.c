#include <stdio.h>
int main()
{
    int num;
    printf("Enter the number:\n");
    scanf("%d",&num);
    prime_factorization(num);
    return 0;
}
void prime_factorization(int num)
{
    for(int i=2; num!=1; i=next_Prime(i))
    {
        while(num%i==0)
        {
            printf("%d ",i);
            num=num/i;
        }
    }
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