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
    int temp[n];
    for(int i=0; i<n; i++)
        temp[i]=-1;
    for(int i=0; i<n; i++)
        temp[arr[i]]=-temp[arr[i]];
    for(int i=1; i<n; i++)
        if(temp[i]==-1)
            return i;
}

