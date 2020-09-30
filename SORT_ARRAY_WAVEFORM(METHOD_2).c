// This function sorts arr[0..n-1] in wave form, i.e.,
// arr[0] >= arr[1] <= arr[2] >= arr[3] <= arr[4] >= arr[5]..
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
    sortInWave(arr, n);
    printf("Wave sorted Array is:\n");
    for(int i=0; i<n; i++)
        printf("%d ",arr[i]);
    return 0;
}
void sortInWave(int arr[], int n)
{
    // Traverse all even elements2
    for(int i = 0; i < n; i+=2)
    {
        if(i>0 && arr[i-1] > arr[i])
            swap(&arr[i], &arr[i-1]);
        if(i<n-1 && arr[i] < arr[i+1])
            swap(&arr[i], &arr[i + 1]);
    }
}
void swap(int *x, int *y)
{
    int temp = *x;
    *x = *y;
    *y = temp;
}