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
    for(int i=0; i<n; i++)
        for(int j=i+1; j<n; j++)
            if(arr[i]==arr[j])
                return arr[i];
}
