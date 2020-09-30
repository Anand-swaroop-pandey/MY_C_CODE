#include<stdio.h>
int main()
{
    int n;
    printf("Enter Array Size:\n");
    scanf("%d",&n);
    int arr[n];
    printf("Enter %d elements of the sorted array:\n",n);
    for(int i=0; i<n; i++)
        scanf("%d",&arr[i]);
    int result= appear_once(arr,0,n-1);
    printf("Element that Appear once in the given sorted array is:%d\n",result);
    return;
}
int appear_once(int arr[],int low,int high)
{
    while(low<=high)
    {
        if(high==low)
            return arr[low];
        int  mid=(low+high)/2;
        if(mid%2==0)
        {
            if(arr[mid]==arr[mid+1])
                low=mid+2;
            else
                high=mid;
        }
        else
        {
            if(arr[mid]==arr[mid-1])
                low=mid+1;
            else
                high=mid-1;
        }
    }
}
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////