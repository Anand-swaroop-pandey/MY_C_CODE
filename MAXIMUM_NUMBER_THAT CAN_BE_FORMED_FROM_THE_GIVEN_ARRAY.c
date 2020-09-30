#include<stdio.h>
long int IntConcat(int,int);
long int power(int,int);
int main()
{
    int n;
    printf("Enter the Size of Array:\n");
    scanf("%d",&n);
    int arr[n];
    printf("Enter %d Elements:\n",n);
    for(int i=0; i<n; i++)
        scanf("%d",&arr[i]);
    maximum_number_formed_from_array(arr,n);
    printf("Maximum Number that can be formed from the Given Array is : ");
    for(int i=0; i<n; i++)
        printf("%d",arr[i]);
}
void maximum_number_formed_from_array(int arr[],int n)
{
    for(int i=0; i<n; i++)
        for(int j=i+1; j<n; j++)
            if(IntConcat(arr[i],arr[j])<IntConcat(arr[j],arr[i]))
                swap(&arr[i],&arr[j]);
}
long int IntConcat(int num1, int num2)
{
    long int temp,result;
    int digits;
    digits=count_digits(num2);
    temp=power(10,digits);
    result=num1*temp+num2;
    return result;
}
int count_digits(int num)
{
    int count;
    for(count=0; num!=0; num=num/10)
        count++;
    return count;
}

long int power(int num,int exp)
{
    long int p=1;
    for(int i=1; i<=exp; i++)
        p=p*num;
    return p;
}
void swap(int*num1,int*num2)
{
    int temp=*num1;
    *num1=*num2;
    *num2=temp;
}