#include<stdio.h>
#include<stdlib.h>
int main()
{
    int*num1=(int*)malloc(sizeof(int));
    int*num2=(int*)malloc(sizeof(int));
    printf("Enter Two numbers:\n");
    scanf("%d%d",num1,num2);
    if((*num1)>(*num2))
        printf("%d is greater than %d\n",*num1,*num2);
    else
        printf("%d is greater than %d\n",*num2,*num1);
    return 0;
}