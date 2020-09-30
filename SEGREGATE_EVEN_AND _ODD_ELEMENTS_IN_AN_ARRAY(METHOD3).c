#include <stdio.h>
int main()
{
    int n;
    printf("Enter the size of Array:\n");
    scanf("%d",&n);
    int arr[n];
    for(int i=0; i<n; i++)
        scanf("%d",&arr[i]);
    int count_odd=segregate(arr,n);
    printf("The Odd numbers in the array are %d\n",count_odd);
    printf("Array after Segregation is:\n");
    for(int i=0; i<n; i++)
        printf("%d\n",arr[i]);
    return 0;
}
int segregate(int arr[], int size)
{
    int j = 0;
    for(int i = 0; i < size; i++)
        if(arr[i]%2!= 0)
        {
            swap(&arr[i], &arr[j]);
            j++; 
        }
    return j;
}
void swap(int* a, int* b)
{
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}