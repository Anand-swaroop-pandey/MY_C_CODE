#include<stdio.h>
int appear_once(int [],int);
int main()
{
    int n;
    printf("Enter the Size of the Array:\n");
    scanf("%d",&n);
    int arr[n];
    printf("Enter %d elements:\n",n);
    for(int i=0; i<n; i++)
        scanf("%d",&arr[i]);
    int result=appear_once(arr,n);
    printf("Element Appearing once is:%d\n",result);
}
int appear_once(int arr[],int n)
{
    int counter,freq_arr[n];
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
    for(int i=0; i<n; i++)
        if(freq_arr[i]==1)
        {
            printf("%d occur %d times in an Array\n",arr[i],freq_arr[i]);
            break;
        }
}
