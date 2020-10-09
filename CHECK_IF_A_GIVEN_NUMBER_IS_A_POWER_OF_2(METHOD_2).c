#include <stdio.h>
int main()
{
    int num;
    printf("Enter the number:\n");
    scanf("%d",&num);
    check_power_2(num);
    return 0;
}
void check_power_2(int num)
{
    int count_set_bits= 0;
    int temp= num;
    while(temp>0)
    {
        int bit=(temp& 1);
        if(bit==1)
            count_set_bits++;
        temp>>= 1;
    }
    if(count_set_bits==1)
        printf("%d is a power of 2\n",num);
    else
        printf("%d is not a power of 2\n",num);
}