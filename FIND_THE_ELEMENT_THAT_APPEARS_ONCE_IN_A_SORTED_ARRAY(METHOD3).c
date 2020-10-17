#include<stdio.h>
int main()
{
    int n;
    printf("Enter Array Size:\n");
    scanf("%d",&n);
    int arr[n];
    printf("Enter %d elements of the sorted array:\n",n);
    for(int i=0; i<n; i++)
        scanf("%d",&arr[i]);
    int result= appear_once(arr,n);
    printf("Element that Appear once in the given sorted array is:%d\n",result);
    return;
}
int appear_once(int arr[],int n)
{
    int freq_arr[n];
    count_frequency(arr,freq_arr,n);
    for(int i=0; i<n; i++)
        if(freq_arr[i]==1)
            return arr[i];
}
void count_frequency(int arr[],int freq_arr[],int n)
{
    for(int i=0; i<n; i++)
        freq_arr[i]=-1;
    for(int i=0; i<n; i++)
    {
        if(freq_arr[i]==0)
            continue;
        int counter=1;
        for(int j=i+1; j<n; j++)
            if(arr[i]==arr[j])
            {
                counter++;
                freq_arr[j]=0;
            }
        freq_arr[i]=counter;
    }
}
