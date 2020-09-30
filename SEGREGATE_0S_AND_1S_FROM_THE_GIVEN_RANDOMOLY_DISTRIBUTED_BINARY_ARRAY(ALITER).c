#include<stdio.h>
void swap(int *, int *);
int main()
{
    int arr[100],n;
    printf("How many elements Do you want ?\n");
    scanf("%d",&n);
    printf("Enter %d elements :\n",n);
    for(int i=0; i<n; i++)
        scanf("%d",&arr[i]);
    segregate_0s_and_1s(arr,n);
    printf("Array after segregation:\n");
    for(int i = 0; i < n; i++)
        printf("%d ", arr[i]);
    return 0;
}
void segregate_0s_and_1s(int arr[], int size)
{
    int count=0;
    for(int i=0; i<size; i++)
        if(arr[i]==0)
            count++;
    for(int i=0; i<count; i++)
        arr[i]=0;
    for(int i=count; i<size; i++)
        arr[i]=1;
}