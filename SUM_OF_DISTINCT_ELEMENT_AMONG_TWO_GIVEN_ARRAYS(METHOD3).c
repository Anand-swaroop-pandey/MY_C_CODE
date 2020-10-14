#include <stdio.h>
int main()
{
    int n,m;
    printf("Enter size of arr1[]:\n");
    scanf("%d",&n);
    int arr1[n];
    printf("Enter size of arr2[]:\n");
    scanf("%d",&m);
    int arr2[m];
    printf("Enter %d elements of arr1[]:\n",n);
    for(int i=0; i<n; i++)
        scanf("%d",&arr1[i]);
    printf("Enter %d elements of arr2[]:\n",m);
    for(int i=0; i<m; i++)
        scanf("%d",&arr2[i]);
    int sum=sum_distinct_elements(arr1,n,arr2,m);
    printf("sum of distinct element among two given arrays is %d\n",sum);
    return 0;
}
int sum_distinct_elements(int arr1[],int n,int arr2[],int m)
{
    int len=n+m,k=0,sum=0;
    int arr3[len],freq_arr[len];
    for(int i=0; i<n; i++)
        arr3[k++]=arr1[i];
    for(int i=0; i<m; i++)
        arr3[k++]=arr2[i];
    frequency(arr3,freq_arr,len);
    for(int i=0; i<len; i++)
        if(freq_arr[i]==1)
            sum=sum+arr3[i];
    return sum;
}
void frequency(int arr[],int freq_arr[],int len)
{
    for(int i=0; i<len; i++)
        freq_arr[i]=-1;
    for(int i=0; i<len; i++)
    {
        if(freq_arr[i]==0)
            continue;
        int count=1;
        for(int j=i+1; j<len; j++)
            if(arr[i]==arr[j])
            {
                count++;
                freq_arr[j]=0;
            }
        freq_arr[i]=count;
    }
}
