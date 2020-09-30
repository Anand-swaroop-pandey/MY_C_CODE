#include <stdio.h>
int check_abundant(int,int);
int main()
{
    int n;
    printf("How many abundant numbers do you want;\n");
    scanf("%d",&n);
    int i=1;
    while(1)
    {
        int test= check_abundant(i,n);
        if(test==1)
            break;
        i++;
    }
    return 0;
}
int check_abundant(int num,int n)
{
    int sum=0;
    static int count=0;
    for(int i=1; i<num; i++)
        if(num%i==0)
            sum=sum+i;
    if(sum>num)
    {
        printf("%d\n",num);
        count++;
    }
    if(count==n)
        return 1;
    else
        return 0;
}