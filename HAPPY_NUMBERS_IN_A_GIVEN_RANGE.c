#include <stdio.h>
int main()
{
    int low,high;
    printf("Enter Low value:\n");
    scanf("%d",&low);
    printf("Enter High value:\n");
    scanf("%d",&high);
    printf("Happy number between %d and %d is :\n",low,high);
    happy(low,high);
    return 0;
}
void happy(int low,int high)
{
    int sum,rem,sqr,flag,temp;
    for(int num=(low+1); num<high; num++)
    {
        temp=num;
        flag=0;
        while(temp!=4 && temp!=16 && temp!=20 && temp!=37 && temp!=42 && temp!=58 && temp!=89 && temp!=145)
        {
            sum=0;
            while(temp!=0)
            {
                rem=temp%10;
                sqr=rem*rem;
                sum=sum+sqr;
                temp=temp/10;
            }
            if(sum==1)
            {
                flag=1;
                break;
            }
            else
                temp=sum;
        }
        if(flag==1)
            printf("%d\n",num);
    }
}