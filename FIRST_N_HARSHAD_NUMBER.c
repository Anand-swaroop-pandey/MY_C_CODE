#include <stdio.h>
int main()// A positive integer which is divisible by the sum of its digits  is called as "Harshad Number"/Niven number.
{
    int n;
    printf("Enter N value;\n");
    scanf("%d",&n);
    printf("First %d Harshad numbers are:\n",n);
    N_Harshad(n);
    return 0;
}

void N_Harshad(int n)
{
    int temp,rem,sum,num=1,count=0,test;
    while(1)
    {
        temp=num;
        sum=0;
        while(temp!=0)
        {
            rem=temp%10;
            sum=sum+rem;
            temp=temp/10;
        }
        test=num%sum;
        if(test==0)
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