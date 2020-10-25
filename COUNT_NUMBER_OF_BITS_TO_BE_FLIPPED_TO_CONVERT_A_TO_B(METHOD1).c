#include <stdio.h>
int main()
{
    int a,b;
    printf("Enter Two numbers:\n");
    scanf("%d%d",&a,&b);
    int result=count_flip_bits(a,b);
    printf("Number of Bits need to be Flipped To convert %d to %d is:%d",a,b,result);
    return 0;
}
int count_flip_bits(int a,int b)
{
    int XOR=a^b;
    int count_set_bits=0;
    while(XOR!=0)
    {
        int bit=XOR &1;
        if(bit==1)
            count_set_bits++;
        XOR=XOR>>1;
    }
    return count_set_bits;
}