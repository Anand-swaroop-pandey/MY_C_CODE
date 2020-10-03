#include <stdio.h>
int main()
{
    int n,m;
    printf("Enter the size of the array:\n");
    scanf("%d",&n);
    int arr[n];
    printf("Enter %d elements\n",n);
    for(int i=0; i<n; i++)
        scanf("%d",&arr[i]);
    printf("Enter the size of size of array which is to be checked for a subset\n");
    scanf("%d",&m);
    int sub[m];
    printf("Enter %d elements:\n",m);
    for(int i=0; i<m; i++)
        scanf("%d",&sub[i]);
    int result=check_subset(arr,sub,n,m);
    if(result==-1)
        printf("Not a subset:\n");
    else
        printf("It is a subset:\n");
    return 0;
}
int check_subset(int arr1[],int arr2[],int n,int m)
{
    for(int i=0; i<m; i++)
    {
        int j;
        for(j=0; j<n; j++)
            if(arr2[i]==arr1[j])
                break;
        if(j==n)
            return -1;
    }
    return 0;
}