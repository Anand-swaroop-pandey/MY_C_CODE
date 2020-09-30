#include <stdio.h>
int main()
{
    int low,high;
    printf("Enter a low value:\n");
    scanf("%d",&low);
    printf("Enter a high value:\n");
    scanf("%d",&high);
    if(low>high)//swap low and value
    {
        int temp=low;
        low=high;
        high=temp;
    }
    printf("Prime number between %d and %d are\n",low,high);
    range_prime(low,high);
    return 0;
}
void range_prime(int low,int high)
{
    for(int num=(low+1); num<high; num++)
    {
        int count=0;
        for(int i=1; i<=num; i++)
        {
            if(num%i==0)
                count++;
        }
        if(count==2)
            printf("%d\n",num);
    }
}