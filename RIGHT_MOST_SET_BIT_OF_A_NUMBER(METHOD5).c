#include <stdio.h>
int main()
{
    int dec;
    printf("Enter a decimal number:\n");
    scanf("%d",&dec);
    int pos=set_bit(dec);
    if(pos==-1)
        printf("Invalid number\n");
    else
        printf("Position of Right Most Set Bit in %d is %d\n",dec,pos);
    return 0;
}
int set_bit(int dec)
{
    if(dec==0)
        return -1;
    int mask= 1, position = 1;
    while((mask & dec)==0)
    {
        mask = mask << 1;
        position++;
    }
    return position;
}

