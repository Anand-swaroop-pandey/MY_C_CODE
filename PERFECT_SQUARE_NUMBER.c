#include <stdio.h>
#include<math.h>
int main()
{
    int num;
    printf("Enter a number:\n");
    scanf("%d",&num);
    int result=perfect_square_number(num);
    if(result==-1)
        printf("%d is not a perfect square number:\n",num);
    else
        printf("%d is  a perfect square number:\n",num);
    return 0;
}
int  perfect_square_number(int num)
{
    float f=sqrt(num);
    int i=f;
    if(i==f)
        return 1;
    else
        return -1;
}