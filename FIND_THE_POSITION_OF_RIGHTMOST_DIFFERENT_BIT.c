#include <stdio.h>
int main()
{
    int a,b;
    printf("Enter two numbers:\n");
    scanf("%d%d",&a,&b);
    int position= rightmost_different_bit(a,b);
    printf("Position of Right most different bit is:%d\n",position);
    return 0;
}
int rightmost_different_bit(int a,int b)
{
    int XOR=a^b;
    int position=1;
    while(XOR!=0)
    {
        int bit=XOR &1;
        if(bit==1)
            return position;
        XOR=XOR>>1;
        position++;
    }
    return position;
}