#include<stdio.h>
int main()
{
    int n;
    printf("Enter the size of the Arrray:\n");
    scanf("%d",&n);
    int arr[n];
    printf("Enter %d elements:\n",n);
    for(int i=0; i<n; i++)
        scanf("%d",&arr[i]);
    int count=reverse_pair_count(arr,n);
    printf("Number of reverse pairs in the given array are:%d\n",count);
    return 0;
}
int reverse_pair_count(int arr[],int n)
{
    int temp[n];
    int inversion_count= mergeSort(arr,temp,0,n- 1);
    return inversion_count;
}
int mergeSort(int arr[],int temp[],int low, int high)
{
    int inversion_count=0;
    if(low<high)
    {
        int mid = (high+ low) / 2;
        int left_Inversions=mergeSort(arr,temp, low, mid);
        int right_Inversions=mergeSort(arr,temp,mid + 1,high);
        int merge_Inversions=merge(arr,temp,low,mid,high);
        inversion_count=left_Inversions + right_Inversions + merge_Inversions;
    }
    return inversion_count;
}
int merge(int arr[], int temp[], int low, int mid, int high)
{
    int inversion_count=0;
    int  i = low, j = mid+1, k = low;
    while(i <= mid && j <= high)
        if(arr[i] <= arr[j])
            temp[k++] = arr[i++];
        else
        {
            temp[k++] = arr[j++];
            inversion_count=inversion_count+ (mid - i+1);
        }
    while(i <= mid)
        temp[k++] = arr[i++];
    while(j <=high)
        temp[k++] = arr[j++];
    for(i = low; i <= high; i++)
        arr[i] = temp[i];
    return inversion_count;
}