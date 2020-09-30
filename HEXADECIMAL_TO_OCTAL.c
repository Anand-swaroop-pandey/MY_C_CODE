#include <stdio.h>
int main()
{
    char hex[100];
    printf("Enter A Hexadecimal Number:\n");
    gets(hex);
    printf("Octal  Equivalent of %s is :\n",hex);
    Hex_to_Oct(hex);
    return 0;
}
void Hex_to_Oct(char hex[])
{
    int val,dec=0,count=0;//hexadecimal to decimal
    int len=strlen(hex);
    for(int i=len-1; i>=0; i--)
    {
        if(hex[i]>='A' && hex[i]<='F')
            val = hex[i] - 55;
        else if(hex[i]>='0' && hex[i]<='9')
            val=hex[i]-48;
        dec=dec+val*power(16,count);
        count++;
    }
    int oct[50],i=0;//decimal to octal
    while(dec!=0)
    {
        int rem=dec%8;
        oct[i]=rem;
        dec=dec/8;
        i++;
    }
    for(int j=i-1; j>=0; j--)
        printf("%d",oct[j]);
}
int power(int num,int exp)
{
    int power=1;
    for(int i=1; i<=exp; i++)
    {
        power=power*num;
    }
    return power;
}