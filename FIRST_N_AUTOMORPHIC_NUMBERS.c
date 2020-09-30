#include <stdio.h>
int main()
{
    int n;
    printf("Enter a number:\n");
    scanf("%d",&n);
    int i=0;
    while(1)
    {
        int test=check_automorphic(i,n);
        if(test==1)
            break;
        i++;
    }
    return 0;
}

int check_automorphic(int num,int n)
{
    static int count=0;
    int no=count_digits(num);
    int sq=power(num,2);
    int p=power(10,no);
    int last=sq%p;
    if(last==num)
    {
        printf("%d\n",num);
        count++;
    }
    if(count==n)
        return 1;
    else
        return 0;
}
int count_digits(int num)
{
    int count=0;
    while(num!=0)
    {
        count++;
        num= num/10;
    }
    return count;
}
int power(int a,int no)
{
    int p=1;
    for(int i=0; i<no; i++)
        p=p*a;
    return p;
}