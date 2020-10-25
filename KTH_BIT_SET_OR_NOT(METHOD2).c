#include <stdio.h>
int main()
{
    int num,k;
    printf("Enter the number:\n");
    scanf("%d",&num);
    printf("Enter the value of K:\n");
    scanf("%d",&k);
    int x=kth_bit_set_or_not(num,k);
    if(x==-1)
        printf("No");
    else
        printf("Yes");
    return 0;
}
int kth_bit_set_or_not(int num,int k) 
{
    int mask=1;
    mask=mask<<(k-1);
    if((num & mask)!=0)
        return 1;
    else
        return-1;
}