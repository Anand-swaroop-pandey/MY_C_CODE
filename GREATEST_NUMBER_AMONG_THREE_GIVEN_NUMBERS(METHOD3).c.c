#include <stdio.h>
int Greatest(int,int,int);
int main()
{
    int num1,num2,num3;
    printf("Enter three numbers:\n");
    scanf("%d%d%d",&num1,&num2,&num3);
    int greatest=Greatest(num1,num2,num3);
    printf("%d is greatest among %d  %d  and %d",greatest,num1,num2,num3);
    return 0;
}
int Greatest(int x,int y,int z)
{
    if(x>y)
    {
        if(y>z)
            return x;
        else
        {
            if(x>z)
                return x;
            else
                return z;
        }
    }
    else
    {
        if(y<z)
            return z;
        else
            return y;
    }
}