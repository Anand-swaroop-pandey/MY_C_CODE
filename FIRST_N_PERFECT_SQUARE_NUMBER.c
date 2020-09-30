#include <stdio.h>
#include<math.h>
int main()
{
    int n;
    printf("Enter N value:\n");
    scanf("%d",&n);
    printf("First %d perfect square numbers are:\n",n);
    perfect_square_number(n);
    return 0;
}
void  N_perfect_square_number(int n)
{
    int count=0,num=1;
    while(1)
    {
        float f=sqrt(num);
        int i=f;
        if(i==f)
        {
            printf("%d\n",num);
            count++;
        }
        if(count==n)
            break;
        else
            num++;
    }
}