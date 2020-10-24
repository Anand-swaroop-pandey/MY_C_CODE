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
    int count =0;
    while(dec!=0)
    {
        count++;
        int bit=dec%2;
        if(bit==1)
            return count;
        dec=dec/2;
    }
}
