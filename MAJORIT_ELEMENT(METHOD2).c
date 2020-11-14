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
    insertion_sort(arr,n);
    int first_index=Binary_search(arr[n/2],arr,n);
    if(arr[first_index]==arr[first_index+(n/2)])
        printf("%d is Majority Element\n",arr[first_index]);
    else
        printf("Majority Element Doesnot Exist\n");
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
int Binary_search(int key,int arr[],int n)
{
    int low=0,high=(n-1),mid;
    while(low<=high)
    {
        mid=(low+high)/2;
        if(arr[mid]==key)
        {
            while(arr[mid]==key)
                mid--;
            return (mid+1);
        }
        else if(arr[mid]<key)
            low=mid+1;
        else if(arr[mid]>key)
            high=mid-1;
    }
}
