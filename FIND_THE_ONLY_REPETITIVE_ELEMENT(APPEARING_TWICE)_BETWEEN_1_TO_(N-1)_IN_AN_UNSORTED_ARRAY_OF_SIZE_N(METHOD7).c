#include<stdio.h>
int main()
{
    int n;
    printf("Enter array size:\n");
    scanf("%d",&n);
    int arr[n];
    printf("Enter %d elements in the range of 1 to %d:\n",n,n-1);
    for(int i=0; i<n; i++)
        scanf("%d",&arr[i]);
    int result=only_repititive(arr,n);
    printf("Element appearing Twice in the given array is:%d\n",result);
    return 0;
}
int only_repititive(int arr[],int n)
{
    int freq_arr[n];
    count_frequency(arr,freq_arr,n);
    for(int i=0; i<n; i++)
        if(freq_arr[i]==2)
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
