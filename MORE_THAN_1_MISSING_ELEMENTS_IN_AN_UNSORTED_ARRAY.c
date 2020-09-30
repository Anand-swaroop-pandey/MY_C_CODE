
//Given a list of integers from the range [1, N-1] with some of the elements missing.
//The task is to find the missing elements. Note that there can be duplicates in the list.
#include <stdio.h>
int main()
{
    int n;
    printf("Enter the size of the array:\n");
    scanf("%d",&n);
    int arr[n];
    printf("Enter %d elements:\n",n);
    for(int i=0; i<n; i++)
        scanf("%d",&arr[i]);
    printf("Missing Elements are:\n");
    missing_number(arr,n);
    return 0;
}
void missing_number(int arr[],int n)
{
    int temp[n];
    for(int i=0; i<n; i++)
        temp[i]=-1;
    for(int i=0; i<n; i++)
        temp[arr[i]]=0;
    for(int i=1; i<n; i++)
        if(temp[i]!=0)
            printf("%d\n",i);
}