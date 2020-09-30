#include <stdio.h>
int main()
{
    int low,high;
    printf("Enter low value:\n");
    scanf("%d",&low);
    printf("Enter high value:\n");
    scanf("%d",&high);
    printf("Perfect number between %d and %d are:\n",low,high);
    Range_perfect(low,high);
    return 0;
}
void Range_perfect(int low,int high)
{
    int sum,count=0;
    for(int num=(low+1); num<high; num++)
    {
        sum=0;
        for(int i=1; i<=num/2; i++)
            if(num%i==0)
                sum=sum+i;
        if(sum==num)
            printf("%d\n",num);
    }
}