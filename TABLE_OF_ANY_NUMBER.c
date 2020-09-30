#include <stdio.h>
int main()
{
    int num;
    printf("Enter a number:\n");
    scanf("%d",&num);
    printf("Table of % d is:\n",num);
    for(int i=1; i<=10; i++)
        printf("%d  x  %d = %d\n",num,i,num*i);
    return 0;
}