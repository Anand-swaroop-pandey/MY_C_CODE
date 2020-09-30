//dutch national flag algorithm
#include <stdio.h>
int main()
{
    int n;
    printf("Enter the Size of Array:\n");
    scanf("%d",&n);
    int arr[n];
    printf("Enter %d elements consisting of 0s,1s and 2s:\n",n);
    for(int i=0; i<n; i++)
        scanf("%d",&arr[i]);
    sort_0_1_2(arr,n);
    printf("Array after sorting is:\n");
    for(int i=0; i<n; i++)
        printf("%d\n",arr[i]);
    return 0;
}
void sort_0_1_2(int arr[], int n)
{
    int low = 0;
    int mid =0;
    int high = n-1;
    while(mid <= high)
        if(arr[mid]==0)
            swap(&arr[low++], &arr[mid++]);
        else if(arr[mid]==1)
            mid++;
        else if(arr[mid]==2)
            swap(&arr[mid], &arr[high--]);
}
void swap(int* a, int* b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

