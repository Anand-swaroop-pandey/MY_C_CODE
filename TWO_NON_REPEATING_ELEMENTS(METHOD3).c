#include <stdio.h>
int main()
{
    int n;
    printf("Enter the size of the Array\n");
    scanf("%d",&n);
    int arr[n];
    printf("Enter %d elements:\n",n);
    for(int i=0; i<n; i++)
        scanf("%d",&arr[i]);
    two_Non_repeating(arr,n);
    return 0;
}
void two_Non_repeating(int arr[],int n)
{
    int freq_arr[n];
    count_frequency(arr,freq_arr,n);
    printf("Two Non repeating Elements are:\n");
    for(int i=0; i<n; i++)
        if(freq_arr[i]==1)
            printf("%d\n",arr[i]);
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