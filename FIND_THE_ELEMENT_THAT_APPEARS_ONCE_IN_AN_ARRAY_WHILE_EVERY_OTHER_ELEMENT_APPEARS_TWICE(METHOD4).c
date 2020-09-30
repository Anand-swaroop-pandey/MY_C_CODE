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
    int arr_sum=0,sum=0;
    for(int i=0; i<n; i++)
        arr_sum=arr_sum+arr[i];
    insertion_sort(arr,n);
    int index=duplicate_sorted(arr,n);
    for(int i=0; i<index; i++)
        sum=sum+arr[i];
    int num=(2*sum)-arr_sum;
    return num;
}
void insertion_sort(int arr[],int n)
{
    for(int i=1; i<n; i++)
    {
        int temp=arr[i];
        int j=i-1;
        while(arr[j]>temp && j>=0)
        {
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=temp;
    }
}
int duplicate_sorted(int arr[],int len)
{
    int j=0;
    for(int i=0; i<(len-1); i++) //so that array does goes out of bound
        if(arr[i]!=arr[i+1])
            arr[j++]=arr[i];
    arr[j++]=arr[len-1];//to avoid out of bound array
    return j;
}


