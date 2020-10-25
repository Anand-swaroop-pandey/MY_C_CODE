#include <stdio.h>
int main()
{
    int a,b;
    printf("Enter Two numbers:\n");
    scanf("%d%d",&a,&b);
    int result=opposite_signs(a,b);
    if(result==-1)
        printf("YES");
    else if(result==0)
        printf("NO");
    return 0;
}
int opposite_signs(int a,int b)
{
    int XOR=a^b;
    XOR=XOR>> 31;
    return XOR;
}