#include<stdio.h>
int main()
{
    int n;
    printf("Enter the size of an array:\n");
    scanf("%d",&n);
    int arr[n];
    printf("Enter %d elements:\n",n);
    for(int i=0; i<n; i++)
        scanf("%d",&arr[i]);
    printf("%d is largest palindrome number:\n",check_Largest_palindrome(arr,n));
    return 0;
}
int check_Largest_palindrome(int arr[],int len)
{
    int  temp[len],j=0;
    for(int i=0; i<len; i++)
        temp[i]=-1;
    for(int i=0; i<len; i++)
        if(is_palindrome(arr[i])==1)
            temp[j++]=arr[i];
    return largest_palindrome(temp);
}
int is_palindrome(int num)
{
    int rev=0,temp=num;
    while(temp!=0)
    {
        rev=rev*10+temp%10;
        temp=temp/10;
    }
    if(rev==num)
        return 1;
    else
        return -1;
}
int largest_palindrome(int temp[])
{
    int i=0,len=0;
    while(temp[i++]!=-1)
        len++;
    int largest=temp[0];
    for(int i=1; i<len; i++)
        if(temp[i]>largest)
            largest=temp[i];
    return largest;
}

