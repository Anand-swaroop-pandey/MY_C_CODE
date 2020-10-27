#include <stdio.h>
int main()
{
    int num;
    printf("Enter the number:\n");
    scanf("%d",&num);
    int product=muntiply_3_point_5(num);
    printf("%d * 3.5=%d\n",num,product);
    return 0;
}
int muntiply_3_point_5(int num)
{
    int sum=(num<<1)+num+(num>>1);
    return sum;
}