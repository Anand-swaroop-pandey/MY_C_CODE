#include <stdio.h>
int main()
{
    int dec;
    printf("Enter a decimal number:\n");
    scanf("%d",&dec);
    int pos=set_bit(dec);
    printf("Position of Right Most Set Bit in %d is %d\n",dec,pos);
    return 0;
}
int set_bit(int dec)
{
    int bin[32];
    int index=dec_to_bin(dec,bin);
    for(int i=0; i<index; i++)
        if(bin[i]==1)//position=index+1;
            return i+1;
}
int dec_to_bin(int dec,int bin[])
{
    int i=0;
    while(dec!=0)
    {
        bin[i++]= dec%2;
        dec=dec/2;
    }
    return i;
}