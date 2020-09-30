#include <stdio.h>
long power(int,int);
int temp=1;
int main()
{
    int num,p;
    printf("Enter a number:\n");
    scanf("%d",&num);
    printf("Enter power:\n");
    scanf("%d",&p);
    if(p<0)
        printf("Invalid choice:\n");
    int result= power(num,p);
    printf("%d to the power %d is :%d\n",num,p,temp);
    return 0;
}
long int power(int num,int p)
{
    if(p==0)
        return ;
    else
    {
        temp=temp*num;
        p--;
        return  power(num,p);
    }
}