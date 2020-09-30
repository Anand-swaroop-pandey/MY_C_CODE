#include <stdio.h>
int main()
{
    int num;
    printf("Enter a Number:\n");
    scanf("%d",&num);
    int result=check(num);
    printf("%d is present %d times in the number %d\n",3,result,num);
    return 0;
}
int check(int num)
{
    int count=0;
    while(num!=0)
    {
        int last=num%10;
        if(last==3)
            count++;
        num=num/10;
    }
    return count;
}