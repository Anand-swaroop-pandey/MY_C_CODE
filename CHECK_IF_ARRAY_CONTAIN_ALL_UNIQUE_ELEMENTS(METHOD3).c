#include <stdio.h>
int main()
{
    int n;
    printf("Enter the size of the array:\n");
    scanf("%d",&n);
    int arr[n];
    printf("Enter %d elements:\n",n);
    for(int i=0; i<n; i++)
        scanf("%d",&arr[i]);
    int check= check_distinct(arr,n);
    if(check==-1)
        printf("Array contains Duplicate elements\n");
    else
        printf("Array contains all distinct elements\n");
    return 0;
}
int check_distinct(int arr[],int n)
{
    int freq_arr[n],i;
    count_frequency(arr,freq_arr,n);
    for(i=0; i<n; i++)
        if(freq_arr[i]>1)
            break;
    if(i==n)
        return 0;
    return -1;
}
void count_frequency(int arr[],int freq_arr[],int n)
{
    for(int i=0; i<n; i++)
        freq_arr[i]=-1;
    for(int i=0; i<n; i++)
    {
        if(freq_arr[i]==0)
            continue;
        int count=1;
        for(int j=i+1; j<n; j++)
            if(arr[i]==arr[j])
            {
                count++;
                freq_arr[j]=-1;
            }
        freq_arr[i]=count;
    }
}

