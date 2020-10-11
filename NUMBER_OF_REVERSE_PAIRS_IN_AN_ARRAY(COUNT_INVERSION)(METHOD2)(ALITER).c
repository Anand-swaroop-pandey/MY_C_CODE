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
    int inversion_count= mergeSort(arr,0,n- 1);
    return inversion_count;
}
int mergeSort(int arr[],int low, int high)
{
    int inversion_count=0;
    if(low<high)
    {
        int mid = (high+ low) / 2;
        int left_Inversions=mergeSort(arr,low, mid);
        int right_Inversions=mergeSort(arr,mid + 1,high);
        int merge_Inversions=merge(arr,low,mid,high);
        inversion_count=left_Inversions + right_Inversions + merge_Inversions;
    }
    return inversion_count;
}
int merge(int arr[],int low, int mid, int high)
{
    int inversion_count=0, start1= low,start2= mid+1,left_size=mid-low+1,right_size=high-mid, left[left_size],right[right_size];
    copy(left,left_size,start1,arr);
    copy(right,right_size,start2,arr);
    int i=0,j=0,k=low;
    while(i <left_size && j <right_size)
        if(left[i] <= right[j])
            arr[k++] = left[i++];
        else
        {
            arr[k++] = right[j++];
            inversion_count=inversion_count+(mid +1)-(low+i);
        }
    while(i <left_size)
        arr[k++] = left[i++];
    while(j <right_size)
        arr[k++] =right[j++];
    return inversion_count;
}
void copy(int temp[],int temp_size,int start,int arr[])
{
    for(int i=0; i<temp_size; i++)
        temp[i]=arr[start++];
}