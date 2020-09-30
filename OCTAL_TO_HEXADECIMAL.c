#include <stdio.h>
int main()
{
    long int oct;
    printf("Enter a octal value:\n");
    scanf("%d",&oct);
    oct_to_hex(oct);
    return 0;
}
int oct_to_hex(long int oct)
{
    long int tmp,dec=0,count=0,temp=oct;
    while(oct!=0)//octal to decimal
    {
        int rem=oct%10;
        tmp= rem* power(8,count);
        dec=dec+tmp;
        oct=oct/10;
        count++;
    }
    if(dec==0)//decimal to hexadecimal
    {
        printf("0");
        return;
    }
    else
    {
        char hex[100];
        int i=0;
        while(dec!=0)
        {
            int x=dec%16;
            if(x<10)
                hex[i++]=48+temp;
            else
                hex[i++]=55+temp;
            dec=dec/16;
        }
        printf("Hexadecimal equivlaent of %ld is\n",temp);
        for(int j=i-1; j>=0; j--)
            printf("%c",hex[j]);
    }
}
int power(int n,int i)
{
    int p=1;
    for(int j=0; j<i; j++)
        p=p*n;
    return p;
}