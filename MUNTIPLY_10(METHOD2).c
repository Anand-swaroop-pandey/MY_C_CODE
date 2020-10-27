#include <stdio.h>
int main()
{
    int num;
    printf("Enter the number:\n");
    scanf("%d",&num);
    int product=muntiply_10(num);
    printf("%d * 10=%d\n",num,product);
    return 0;
}
int muntiply_10(int num)
{
    int sum=(num<<1) + (num<<3);
    return sum;
}