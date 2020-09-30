#include <stdio.h>
int main()
{
    int oct;
    printf("Enter a octal value:\n");
    scanf("%d",&oct);
    int dec=oct_dec(oct);
    printf("decimal equivlaent of %d is %d \n",oct,dec);
    return 0;
}
int oct_dec(int num)
{
    int last,o,sum=0,i=0;
    while(num!=0)
    {
        last=num%10;
        o= last* power(8,i);
        sum=sum+o;
        num=num/10;
        i++;
    }
    return sum;
}
int power(int n,int i)
{
    int p=1;
    for(int j=0; j<i; j++)
        p=p*n;
    return p;
}