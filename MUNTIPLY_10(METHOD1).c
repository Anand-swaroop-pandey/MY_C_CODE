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
    int sum=0;
    for(int i=0; i<10; i++)
        sum=sum+num;
    return sum;
}