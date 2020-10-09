#include <stdio.h>
int main()
{
    int n,m;
    printf("Enter the Size of the array1:\n");
    scanf("%d",&n);
    printf("Enter the Size of the array2:\n");
    scanf("%d",&m);
    int arr1[n],arr2[m];
    printf("Enter %d Elements of arr1[]:\n",n);
    for(int i=0; i<n; i++)
        scanf("%d",&arr1[i]);
    printf("Enter %d Elements of arr2[]:\n",m);
    for(int i=0; i<m; i++)
        scanf("%d",&arr2[i]);
    int sum=sum_overlapping_element(arr1,arr2,n,m);
    printf("Sum of Overlapping element is:%d\n",sum);
    return 0;
}
int sum_overlapping_element(int arr1[],int arr2[],int n,int m)
{
    int len=n+m,sum=0;
    int arr3[len],freq_arr[len];
    for(int i=0; i<n; i++)
        arr3[i]=arr1[i];
    for(int i=0; i<m; i++)
        arr3[n+i]=arr2[i];
    count_frequency(arr3,len,freq_arr);
    for(int i=0; i<len; i++)
        if(freq_arr[i]==2)
            sum=sum+2*arr3[i];
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