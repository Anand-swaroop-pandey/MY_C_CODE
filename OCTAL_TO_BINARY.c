#include <stdio.h>
int main()
{
    int oct;
    printf("Enter a octal number:\n");
    scanf("%d",&oct);
    printf("Binary equivalent of %d is:\n",oct);
    oct_to_bin(oct);
    return 0;
}
void oct_to_bin(int oct)
{
    int i=0,sum=0;
    while(oct!=0)//octal to decimal
    {
        int last=oct%10;
        int o=last*power(8,i);
        sum=sum+o;
        oct=oct/10;
        i++;
    }
    int j=0;
    int arr[100];
    while(sum!=0)//decimal to binary
    {
        arr[j]=sum%2;
        sum=sum/2;
        j++;
    }
    j--;
    for(int i=j; i>=0; i--)
        printf("%d",arr[i]);
}
int power(int num,int power)
{
    int p=1;
    for(int i=0; i<power; i++)
        p=p*8;
    return p;
}