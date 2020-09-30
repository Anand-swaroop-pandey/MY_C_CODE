#include <stdio.h>
#include<math.h>
int main()
{
    int a,b,c,d;
    printf("Enter value of a ,b and c\n");
    scanf("%d%d%d",&a,&b,&c);
    printf("resultant Quadratic equation is: %d*x*x +%d*x +%d\n\n",a,b,c);//ax^2+bx+c
    //calculating Discriminate
    d=b*b-4*a*c;
    if(d<0)//value of d is negative
    {
        printf("Imagionary roots Exist:\n\n");
        printf("First root: %.2f+i*%.2f\n",-(float)b/(2*a),sqrt(-d)/(2*a));//( (-b/2a) + i*sqrt(-d))/2a
        printf("Second root: %.2f-i*%.2f\n",-(float)b/(2*a),sqrt(-d)/(2*a));//( (-b/2a) - i*sqrt(-d))/2a
    }
    else
    {
        printf("Real roots Exist:\n\n");
        float  root1=-(float)b/(2*a)+sqrt(d)/(2*a);//( (-b/2a) + sqrt(d))/2a
        float  root2=-(float)b/(2*a)-sqrt(d)/(2*a);//( (-b/2a) + sqrt(d))/2a
        printf("First root: %0.2f\n",root1);
        printf("Second root: %0.2f\n",root2);
    }
    return 0;
}