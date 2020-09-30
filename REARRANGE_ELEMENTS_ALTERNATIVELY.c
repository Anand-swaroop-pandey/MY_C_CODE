/*An array contains both positive and negative numbers in random order.
 * Rearrange the array elements so that positive and negative numbers are placed alternatively. Number of positive and negative numbers need not be equal.
 *  If there are more positive numbers they appear at the end of the array.
 *  If there are more negative numbers, they too appear in the end of the array.*/
#include<stdio.h>
int main()
{
    int n;
    printf("Enter the Size:\n");
    scanf("%d",&n);
    int arr[n];
    printf("Enter %d element:\n",n);
    for(int i=0; i<n; i++)
        scanf("%d",&arr[i]);
    rearrange_alternate(arr, n);
    printf("Rearranged array is:\n");
    for(int i = 0 ; i < n; i++)
        printf("%d ",arr[i]);
    return 0;
}
int rearrange_alternate(int arr[], int n)
{
    int i=0;
    int j=segregate_pos_neg(arr, n);
    while((j< n && i < j))
    {
        swap(&arr[i],& arr[j]);
        i=i+2;
        j++;
    }
}
int  segregate_pos_neg(int arr[], int n)
{
    int j = 0;
    for(int i = 0; i < n; i++)
        if(arr[i] < 0)
        {
            swap(&arr[i], &arr[j]);
            j++;
        }
    return j;
}
void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

