#include<stdio.h>
int main()
{
    int n;
    printf("Enter array size:\n");
    scanf("%d",&n);
    int arr[n];
    printf("Enter %d elements in the range of 1 to %d:\n",n,n-1);
    for(int i=0; i<n; i++)
        scanf("%d",&arr[i]);
    int result=only_repititive(arr,n);
    printf("Element appearing Twice in the given array is:%d\n",result);
}
int only_repititive(int arr[],int n)
{
    int repeating;
    for(int i = 0; i < n; i++)
    {
        int element = arr[abs(arr[i])];
        if(element < 0)
        {
            repeating=arr[i];
            break;
        }
        arr[abs(arr[i])] = -arr[abs(arr[i])];
    }
    return repeating;
}
