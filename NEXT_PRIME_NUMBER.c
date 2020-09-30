#include <stdio.h>
int main()
{
    int num;
    printf("Enter a number to determine its immediate Prime number:\n");
    scanf("%d",&num);
    int next= next_Prime(num);
    printf("Immediate prime number to %d is %d\n",num,next);
    return 0;
}
int next_Prime(int num)
{
    while(1)
    {
        num++;
        int count=0;
        for(int i=1; i<=num; i++)
        {
            if(num%i==0)
                count++;
        }
        if(count==2)
            break;
    }
    return num;
}