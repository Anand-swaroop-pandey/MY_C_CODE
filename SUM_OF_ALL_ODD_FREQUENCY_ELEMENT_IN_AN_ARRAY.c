#include <stdio.h>
int main()
{
    int n;
    printf("Enter the size of the array:\n");
    scanf("%d",&n);
    int arr[n];
    int freq_arr[n];
    printf("Enter % delements:\n",n);
    for(int i=0; i<n; i++)
    {
        scanf("%d",&arr[i]);
        freq_arr[i]=-1;
    }
    int result=sum_of_all_odd_frequency_element(arr,freq_arr,n);
    printf("Sum of all odd frequency element is:%d\n",result);
    return 0;
}
int sum_of_all_odd_frequency_element(int arr[],int freq_arr[],int n)
{
    int counter,sum=0;
    for(int i=0; i<n; i++)
    {
        if(freq_arr[i]==0)
            continue;
        counter=1;
        for(int j=i+1; j<n; j++)
            if(arr[i]==arr[j])
            {
                counter++;
                freq_arr[j]=0;
            }
        freq_arr[i]=counter;
    }
    for(int i=0; i<n; i++)
        if(freq_arr[i]!=0)
            if(freq_arr[i]%2!=0)
                sum=sum+arr[i];
    return sum;
}