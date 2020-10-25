#include <stdio.h>
int main()
{
    int a,b;
    printf("Enter two numbers:\n");
    scanf("%d%d",&a,&b);
    int result=check_equal(a,b);
    if(result==-1)
        printf("Not_equal");
    else
        printf("Equal");
    return 0;
}
int check_equal(int a,int b)
{
    if((a & ~b) == 0 && (~a & b) ==0)
        return 1;
    else
        return -1;
}