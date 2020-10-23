#include <stdio.h>
#include<math.h>
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
    int count=count_no_bits(dec);
    int mask=power(2,count)-1;
    int comp_1=dec^mask;
    return comp_1;
}
int count_no_bits(int num)
{
    int count=0;
    while(num!=0)
    {
        count++;
        num=num>>1;
    }
    return count;
}
int power(int num,int exp)
{
    int p=1;
    for(int i=0; i<exp; i++)
        p=p*num;
    return p;
}