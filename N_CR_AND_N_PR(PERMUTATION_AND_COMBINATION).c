#include <stdio.h>
long int factorial(int);
float find_nCr(int, int);
float find_nPr(int, int);
//C program to find nCr and nPr, remember, nCr = n!/(r!*(n-r)!) and nPr = n!/(n-r)!.
int main()
{
    int n,r;
    printf("Enter value of n and r :\n");
    scanf("%d%d",&n,&r);
    if(n<0 || r<0)
        printf("invalid choice:\n");
    float ncr= find_nCr(n, r);
    float npr=find_nPr(n,r);
    printf("nCr is : %f\n",ncr);
    printf("nPr is : %f\n",npr);
    return 0;
}
float  find_nCr(int n,int r)
{
    float result;
    result=factorial(n)/(float)(factorial(r)*factorial(n-r));
    return result;
}
float find_nPr(int n,int r)
{
    float result;
    result=factorial(n)/(float)(factorial(n-r));
    return result;
}
long int factorial(int a)
{
    long  int fact=1;
    for(long int i=1; i<=a; i++)
        fact=fact*i;
    return fact;
}