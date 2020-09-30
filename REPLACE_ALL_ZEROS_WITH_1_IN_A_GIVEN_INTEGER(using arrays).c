#include <stdio.h>
int main()
{
    int num;
    printf("Enter a number:\n");
    scanf("%d",&num);
    printf("Modified number when all 0's present in %d are replaced by 1's:\n",num);
    replace(num);
    return 0;
}
void replace(int num)
{
    int n=no_of_digits(num);
    int arr[n];
    for(int i=0; i<n && num!=0; i++,num=num/10)
        if(num%10==0)
            arr[i]=1;
        else
            arr[i]=num%10;
    for(int j=n-1; j>=0; j--)
        printf("%d",arr[j]);
}
int no_of_digits(int num)
{
    int count=0;
    while(num!=0)
    {
        count++;
        num=num/10;
    }
    return count;
}