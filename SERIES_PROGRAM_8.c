//sin(x)=x-x^3/3!+x^5/5!-x^7/7!................infinite //it is infinite taylor expansion of sine(x)
//calculate the sine value of the given angle(given in degree)
#include<stdio.h>
#include <math.h>
#define PI 3.1415
int main()
{
    float ang_deg,sum=0;
    int limit,count=1;
    printf("Enter the Angle whose sine you want to calculate:\n");
    scanf("%f",&ang_deg);
    if(ang_deg<0)
        return ;
    printf("Enter the limit upto which you want to extend the series:\n");
    scanf("%d",&limit);
    if(limit<=0)
        return;
    float ang_rad=(float)(ang_deg*PI)/(float)180;
    for(int i=1; i<=limit; i++)
    {
        if(i%2!=0)
            sum=sum+pow(ang_rad,count)/fact(count);
        else
            sum=sum-pow(ang_rad,count)/fact(count);
        count=count+2;
    }
    printf("Sin(%0.2f)=%f\n",ang_deg,sum);
}
int fact(int num)
{
    int factorial=1;
    for(int i=num; i>0; i--)
        factorial=factorial*i;
    return factorial;
}