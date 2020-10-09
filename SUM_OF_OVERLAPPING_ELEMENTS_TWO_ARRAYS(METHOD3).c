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
    int sum=0;
    insertion_sort(arr2,m);
    for(int i=0; i<n; i++)
        if(binary_search(arr1[i],arr2,m)==1)
            sum=sum+2*arr1[i];
    return sum;
}
int binary_search(int key,int arr[],int n)
{
    int low=0,high=n-1;
    while(low<=high)
    {
        int mid=(low+high)/2;
        if(arr[mid]==key)
            return 1;
        else if(arr[mid]<key)
            low=mid+1;
        else if(arr[mid]>key)
            high=mid-1;
    }
    return -1;
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
