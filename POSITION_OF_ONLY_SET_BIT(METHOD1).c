#include <stdio.h>
int main()
{
    int num;
    printf("Enter the number:\n");
    scanf("%d",&num);
    int x=position_only_set_bit(num);
    if(x==-1)
        printf("Invalid Number");
    else
        printf("Position of only set bit is:%d\n",x);
    return 0;
}
int position_only_set_bit(int num)
{
    if(check_power_2(num)==-1)
        return -1;
    int position= 1;
    while(num!=0)
    {
        int bit=(num & 1);
        if(bit==1)
            return position;
        num=num>>1;
        position++;
    }
    return position;
}
int  check_power_2(int num)
{
    if(num==0)
        return -1;
    int count_set_bits= 0;
    while(num!=0)
    {
        int bit=(num & 1);
        if(bit==1)
            count_set_bits++;
        if(count_set_bits>1)
            return -1;
        num=num>>1;
    }
    if(count_set_bits==1)
        return 1;
}
