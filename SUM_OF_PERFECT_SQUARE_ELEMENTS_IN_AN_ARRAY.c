#include <stdio.h>
int main()
{
    int n;
    printf("Enter the size  of array:\n");
    scanf("%d",&n);
    int arr[n];
    printf("Enter %d elements:\n",n);
    for(int i=0; i<n; i++)
        scanf("%d",&arr[i]);
    int len=sizeof(arr)/sizeof(arr[0]);
    perfect_square_element(arr,len);
    return 0;
}
void perfect_square_element(int arr[],int len)
{
    int i=0,sum=0;
    while(i<len)
    {
        int result=perfect_square(arr[i]);
        if(result==1)
            sum=sum+arr[i];
        i++;
    }
    printf("Sum of perfect square elements is %d\n",sum);
}
int  perfect_square(int num)
{
    float f=sqrt(num);
    int i=sqrt(num);
    if(i==f)
        return 1;
    else
        return -1;
}