#include<stdio.h>
int main()
{
    int n,pos;
    printf("Enter the Size of the Array:\n");
    scanf("%d",&n);
    int arr[n];
    printf("Enter %d element:\n",n);
    for(int i=0; i<n; i++)
        scanf("%d",&arr[i]);
    printf("Enter the Position:\n");
    scanf("%d",&pos);
    splitArr(arr,n,pos);
    printf("Modified array is:\n");
    for(int i=0; i<n; i++)
        printf("%d\n",arr[i]);
    return 0;
}
void splitArr(int arr[],int n,int pos)
{
    reverseArray(arr,0,n-1);
    reverseArray(arr, 0, n - pos- 1);
    reverseArray(arr, n - pos, n - 1);
}

void reverseArray(int arr[], int start, int end)
{
    while(start < end)
    {
        swap(&arr[start],&arr[end]);
        start++;
        end--;
    }
}
void swap(int *a,int*b)
{
    int temp=*a;
    *a=*b;
    *b=temp;
}
