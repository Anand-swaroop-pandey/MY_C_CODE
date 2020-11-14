#include<stdio.h>
int main()
{
    int n;
    printf("Enter the size of the array:\n");
    scanf("%d",&n);
    int arr[n];
    printf("Enter %d elements:\n",n);
    for(int i=0; i<n; i++)
        scanf("%d",&arr[i]);
    majority_element(arr,n);
    return 0;
}
void majority_element(int arr[],int n)
{
    int freq_arr[n];
    count_frequency(arr,n,freq_arr);
    for(int i=0; i<n; i++)
        if(freq_arr[i]>(n/2))
        {
            printf("%d is Majority Element\n",arr[i]);
            return;
        }
    printf("Majority Element Doesnot Exist\n");
}
int count_frequency(int arr[],int n,int freq_arr[])
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
                freq_arr[j]=0;
            }
        freq_arr[i]=count;
    }
}