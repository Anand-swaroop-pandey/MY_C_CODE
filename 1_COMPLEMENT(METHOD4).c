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
    int sum = 1, power = 1;
    while(sum < dec)
    {
        power *= 2;
        sum =sum+ power;
    }
    int num=sum - dec;
    return num;
}
