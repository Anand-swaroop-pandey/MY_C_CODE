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
    int Double=n*2;
    int temp[Double];
    for(int i = 0; i < n; i++)
    {
        temp[i] = arr[i];
        temp[i + n] = arr[i];
    }
    for(int i = pos; i < pos + n; i++)
        arr[i - pos] = temp[i];
}
