#include <stdio.h>
int main()
{
    int n;
    printf("Enter the size of the Array:\n");
    scanf("%d",&n);
    int arr[n];
    printf("Enter %d elements:\n",n);
    for(int i=0; i<n; i++)
        scanf("%d",&arr[i]);
    rearrange(arr,n); -
    printf("Rearranged elements are:\n");
    for(int i=0; i<n; i++)
        printf("%d\n",arr[i]);
    return 0;
}
void rearrange(int arr[], int n)
{
    for(int i = 1; i < n; i++)
    {
        int temp = arr[i];
        if(temp > 0)
            continue;
        int j = i - 1;
        while(arr[j] > 0 && j >= 0)
        {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = temp;
    }
}