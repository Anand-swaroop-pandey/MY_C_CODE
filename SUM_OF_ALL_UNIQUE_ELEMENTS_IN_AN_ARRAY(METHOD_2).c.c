#include <stdio.h>
int main()
{
    int n;
    printf("Enter the size of the Array:\n");
    scanf("%d",&n);
    int arr[n];
    printf("Enter %d elements:\n",n);
    for(int i=0; i<n; i++)
        scanf("%d",&arr[i]);
    int sum_unique=sum_all_unique(arr,n);
    printf("Sum of All unique elements in the Array is:%d\n",sum_unique);
    return 0;
}
int  sum_all_unique(int arr[],int n)
{
    int freq_arr[n],sum=0;
    count_frequency(arr,n,freq_arr);
    for(int i=0; i<n; i++)
        if(freq_arr[i]!=0)
            sum=sum+arr[i];
    return sum;
}

void count_frequency(int arr[],int n,int freq_arr[])
{
    int counter;
    for(int i=0; i<n; i++)
        freq_arr[i]=-1;
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
}