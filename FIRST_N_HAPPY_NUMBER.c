#include <stdio.h>
int main()
{
    int n;
    printf("Enter value of N:\n");
    scanf("%d",&n);
    printf("First %d Happy numbers are:\n",n);
    happy(n);
    return 0;
}
void happy(int n)
{
    int sum,rem,sqr,flag,count=0,num=1,temp;
    while(1)
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