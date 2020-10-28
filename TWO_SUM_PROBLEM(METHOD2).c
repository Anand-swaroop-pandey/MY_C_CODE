#include<stdio.h>
#include<limits.h>
int main()
{
    int n,key;
    printf("Enter the Size of the Array:\n");
    scanf("%d",&n);
    int arr[n];
    printf("Enter %d elements:\n",n);
    for(int i=0; i<n; i++)
        scanf("%d",&arr[i]);
    printf("Enter key value:\n");
    scanf("%d",&key);
    find(arr,n,key);
    return 0;
}
void find(int arr[],int n,int key)
{
    int temp[n];
    for(int i=0; i<n; i++)
        temp[i]=arr[i];
    insertion_sort(temp,n);
    int num1=INT_MIN,num2=INT_MIN;
    int start=0;
    int end=n-1;
    while(start<end)
    {
        int sum=temp[start]+temp[end];
        if(sum==key)
        {
            num1=temp[start];
            num2=temp[end];
            break;
        }
        if(sum<key)
            start++;
        else
            end--;
    }
    if(num1==INT_MIN && num2==INT_MIN)
    {
        printf("NO INDEX FOUND");
        return;
    }
    int index1=-1,index2=-1;
    for(int i=0; i<n; i++)
        if(index1==-1 || index2==-1)
        {
            if(arr[i]==num1 && index1==-1)
                index1=i;
            else if(arr[i]==num2 && index2==-1)
                index2=i;
        }
        else
            break;
    printf("FOUND INDEXES ARE:%d AND %d\n",index1,index2);
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