#include<stdio.h>
int main()
{
    int n,r;
    printf("Enter number of persons\n");
    scanf("%d",&n);
    printf("Enter number of seats:\n");
    scanf("%d",&r);
    int result=ways(n,r);
    printf("Numer of ways by which %d people can occupy %d seats are %d:\n",n,r,result);
}
int ways(int n,int r)//Number of permutations when ?r? elements are arranged out of a total of ?n? elements is n Pr = n! / (n ? r)!.
{
    if(n<r)
    {
        int temp=n;
        n=r;
        r=temp;
    }
    int num=fact(n)/fact(n-r);
    return num;
}
int fact(int number)
{
    int fact=1;
    for(int i=1; i<=number; i++)
        fact=fact*i;
    return fact;
}