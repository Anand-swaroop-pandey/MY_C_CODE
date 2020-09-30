#include <stdio.h>
int main()
{
    int n,test;
    printf("Enter Value of N:\n");
    scanf("%d",&n);
    printf("First %d Perfect number  are:\n",n);
    N_perfect(n);
    return 0;
}
int N_perfect(int n)
{
    int sum,num=1,count=0;
    while(1)
    {
        sum=0;
        for(int i=1; i<=num/2; i++)
            if(num%i==0)
                sum=sum+i;
        if(sum==num)
        {
            printf("%d\n",num);
            count++;
        }
        if(count==n)
            break;
        else
            num++;
    }
}