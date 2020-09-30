#include<stdio.h>
int main()
{
    int range;
    printf("Enter The Range:\n");
    scanf("%d",&range);
    divisior(range);
    return 0;
}
void divisior(int range)
{
    for(int num=1; num<=range; num++)
    {
        int count=0;
        for(int i=1; i<=num; i++)
            if(num%i==0)
                count++;
        if(count==9)
        {
            printf("\n%d has %d divisors\n",num,9);
            printf("Divisors are:\n");
            for(int j=1; j<=num; j++)
                if(num%j==0)
                    printf("%d\n",j);
        }
    }
}
