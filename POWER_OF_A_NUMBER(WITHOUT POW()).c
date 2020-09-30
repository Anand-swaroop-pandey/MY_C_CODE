#include <stdio.h>
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
    printf("%d to the power %d is :%d\n",num,p,result);
    return 0;
}
int power(int num,int p)
{
    int temp=1;
    for(int i=0; i<p; i++)
        temp=temp*num;
    return temp;
}