#include <stdio.h>
int main()
{
    int n;
    printf("How many prime numbers do you want:\n");
    scanf("%d",&n);
    if(n<0)
        printf("invalid choice");
    else
    {
        printf("First %d prime numbers are:\n",n);
        prime(n);
    }
    return 0;
}
void prime(int n)
{
    int num=2;
    int counter=0;
    while(1)
    {
        int count=0;
        for(int i=1; i<=num; i++)
            if(num%i==0)
                count++;
        if(count==2)
        {
            printf("%d\n",num);
            counter++;
        }
        if(counter==n)
            break;
        else
            num++;
    }
}