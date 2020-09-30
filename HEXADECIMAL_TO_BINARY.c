#i













































































































nclude <stdio.h>

int main()
{
    char hex[100];
    printf("Enter A Hexadecimal Number:\n");
    gets(hex);
    Hex_to_Bin(hex);
    return 0;
}
void Hex_to_Bin(char hex[])
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
    int i=0,bin[50];//decimal to binary
    while(dec!=0)
    {
        bin[i++]=dec%2;
        dec=dec/2;
    }
    printf("Binary Equivalent of %s is :\n",hex);
    for(int j=i-1; j>=0; j--)
        printf("%d",bin[j]);
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