#include <stdio.h>
int main()
{
    int t;
    float p,r,SI;
    printf("Enter principal Amount,Rate and Time:\n");
    scanf("%f%f%d",&p,&r,&t);
    SI=(p*r*t)/100.0;
    printf("Simple  Interest : %f\n",SI);
    return 0;
}