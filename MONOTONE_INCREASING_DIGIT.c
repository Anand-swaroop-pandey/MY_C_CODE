#include <stdio.h>
int main()
{
    int num;
    printf("Enter a number:\n");
    scanf("%d",&num);
    int largest=monotone(num);
    printf("the largest number which is less than equal to %d and has monotone increasing digits is %d\n",num,largest);
    return 0;
}
int monotone(int n)
{
    int count=count_digits(n);
    int arr[count],index;
    for(int i=count-1; i>=0 & n!=0; i--)
    {
        arr[i]=n%10;
        n=n/10;
    }
    for(int i=count-1; i>0; i--)
        if(arr[i]<arr[i-1])
            index=i-1;
    arr[index]--;
    for(int i=index+1; i<count; i++)
        arr[i]=9;
    int num=0;
    for(int i=0; i<count; i++)
        num=num*10+arr[i];
    return num;
}
int count_digits(int num)
{
    int count=0;
    while(num!=0)
    {
        count++;
        num=num/10;
    }
    return count;
}