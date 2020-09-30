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
int Greatest(int num1,int num2,int num3)
{
    if(num1 > num2)
        if(num1 > num3)
            return num1;
        else
            return num3;
    else if(num2 > num3)
        return num2;
    else
        return num3;
}
