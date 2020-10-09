#include <stdio.h>
#include<limits.h>
int main()
{
    int n;
    printf("Enter the size of the array:\n");
    scanf("%d",&n);
    int arr[n];
    printf("Enter %d elements:\n",n);
    for(int i=0; i<n; i++)
        scanf("%d",&arr[i]);
    largest_num_formed(arr,n);
    return 0;
}
void largest_num_formed(int arr[],int n)
{
    int freq_arr[10]= {0};
    for(int i=0; i<n; i++)
        freq_arr[arr[i]]++;
    for(int i=9; i>=0; i--)
        while(freq_arr[i]!=0)
        {
            printf("%d",i);
            freq_arr[i]--;
        }
}