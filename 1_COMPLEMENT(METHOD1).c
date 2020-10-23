#include <stdio.h>
int main()
{
    int dec;
    printf("Enter The Decimal Number\n");
    scanf("%d",&dec);
    int num=complement1(dec);
    printf("1's Complement of %d is %d\n",dec,num);
    return 0;
}
int complement1(int dec)
{
    int bin[32];
    int i=0;
    while(dec!=0)
    {
        int bit=dec&1;
        bin[i++]=1-bit;
        dec=dec>>1;
    }
    int num=bin_to_dec(bin,i);
    return num;
}
int bin_to_dec(int bin[],int n)
{
    int sum=0;
    for(int i=0; i<n; i++)
        sum=sum+ power(2,i)*bin[i];
    return sum;
}
int power(int num,int exp)
{
    int p=1;
    for(int i=0; i<exp; i++)
        p=p*num;
    return p;
}