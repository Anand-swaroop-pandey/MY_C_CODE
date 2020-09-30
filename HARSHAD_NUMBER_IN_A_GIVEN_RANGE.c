#include <stdio.h>
int main()// A positive integer which is divisible by the sum of its digits  is called as "Harshad Number"/Niven number.
{
    int low,high;
    printf("Enter Low value;\n");
    scanf("%d",&low);
    printf("Enter high value;\n");
    scanf("%d",&high);
    printf("Harshad numbers Between %d and %d are:\n",low,high);
    N_Harshad(low,high);
    return 0;
}

void Range_Harshad(int low,int high)
{
    int temp,rem,sum,test;
    for(int num=(low+1); num<high; num++)
    {
        temp=num;
        sum=0;
        while(temp!=0)
        {
            int rem=temp%10;
            sum=sum+rem;
            temp=temp/10;
        }
        test=num%sum;
        if(test==0)
            printf("%d\n",num);
    }
}