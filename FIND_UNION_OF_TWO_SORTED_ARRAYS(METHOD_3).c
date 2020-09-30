#include <stdio.h>
int main()
{
    int n,m;
    printf("Enter the size of the array 1:\n");
    scanf("%d",&n);
    int arr1[n];
    printf("Enter %d elements of array 1:\n",n);
    for(int i=0; i<n; i++)
        scanf("%d",&arr1[i]);
    printf("Enter the size of the array 2:\n");
    scanf("%d",&m);
    int arr2[m];
    printf("Enter %d elements of array 2:\n",n);
    for(int i=0; i<m; i++)
        scanf("%d",&arr2[i]);
    union_arrays(arr1,arr2,n,m);
    return 0;
}
void union_arrays(int arr1[],int arr2[],int n,int m)
{
    int i = 0, j = 0,k=0,len=n+m,union_arr[len];
    while(i < n && j < m)
        if(arr1[i] < arr2[j])
            union_arr[k++]=arr1[i++];
        else if(arr1[i]> arr2[j])
            union_arr[k++]=arr2[j++];
        else if(arr1[i]==arr2[j])
        {
            union_arr[k++]=arr1[i++];
            j++;
        }
    while(i < n)
        union_arr[k++]=arr1[i++];
    while(j < m)
        union_arr[k++]=arr2[j++];
    int count=0;
    for(int i=0; i<k; i++)
        if(union_arr[i]!=union_arr[i+1])
            union_arr[count++]=union_arr[i];
    printf("Union is:\n");
    for(int i=0; i<count; i++)
        printf("%d\n",union_arr[i]);
}
