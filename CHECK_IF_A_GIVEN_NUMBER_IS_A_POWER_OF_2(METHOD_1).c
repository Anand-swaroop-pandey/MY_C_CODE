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
    int flag=0;
    int temp=num;
    while(temp!=1)
    {
        if(temp%2!=0)
        {
            flag=1;
            break;
        }
        temp=temp/2;
    }
    if(flag==0)
        printf("%d is a power of 2\n",num);
    else
        printf("%d is not a power of 2\n",num);
}