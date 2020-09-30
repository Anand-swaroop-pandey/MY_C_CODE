#include <stdio.h>
int main()
{
    char hex[100];
    printf("Enter A Hexadecimal Number:\n");
    gets(hex);
    printf("Decimal Equivalent of %s is :\n",hex);
    Hex_to_Dec(hex);
    return 0;
}
void Hex_to_Dec(char hex[])
{
    int val,sum=0,count=0;
    int len=strlen(hex);
    for(int i=len-1; i>=0; i--)
    {
        if(hex[i]>='A' && hex[i]<='F')
            val = hex[i] - 55;
        else if(hex[i]>='0' && hex[i]<='9')
            val=hex[i]-48;
        sum=sum+val*power(16,count);
        count++;
    }
    printf("%d\n",sum);
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