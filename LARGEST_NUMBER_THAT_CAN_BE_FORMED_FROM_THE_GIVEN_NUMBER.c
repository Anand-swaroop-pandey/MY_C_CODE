#include <stdio.h>
#include<limits.h>
int main()
{
    int num,sign=0;
    printf("Enter a number:\n");
    scanf("%d",&num);
    if(num<0)
    {
    	num=abs(num);
        sign=-1;
    }
    int largest=largest_num_formed(num,sign);
    printf("Largest number that can be formed by Using digits of given number is %d",largest);
    return 0;
}
int largest_num_formed(int num,int sign)
{
    if(num==0)
        return 0;
    int count= count_digits(num);
    int arr[count],i=0;
    while(num!=0)
    {
        arr[i++] =num%10;
        num=num/10;
    }
    if(sign==-1)
        insertion_sort_ascending(arr,count);
    else
        insertion_sort_decending(arr,count);
    int largest=arr[0];
    for(int i=1; i<count; i++)
        largest=largest*10+arr[i];
    if(sign==-1)
        largest=-largest;
    return largest;
}
void  insertion_sort_decending(int arr[],int n)
{
    for(int i=1; i<n; i++)
    {
        int temp=arr[i];
        int j=i-1;
        while(arr[j]<temp && j>=0)
        {
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=temp;
    }
}
void  insertion_sort_ascending(int arr[],int n)
{
    for(int i=1; i<n; i++)
    {
        int temp=arr[i];
        int j=i-1;
        while(arr[j]>temp && j>=0)
        {
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=temp;
    }
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