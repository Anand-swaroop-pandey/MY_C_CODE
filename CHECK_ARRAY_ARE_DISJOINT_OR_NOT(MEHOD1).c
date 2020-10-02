//two arrays are said to be disjoint if they have no element in common
//arr1[]={1,2,3,4,5} and arr2[]={6,7,8,9,10} are disjoint because theh have no common element
#include <stdio.h>
int main()
{
    int n,m;
    printf("Enter the size of Array1:\n");
    scanf("%d",&n);
    int arr1[n];
    printf("Enter %d element:\n",n);
    for(int i=0; i<n; i++)
        scanf("%d",&arr1[i]);
    printf("Enter the size of Array2:\n");
    scanf("%d",&m);
    int arr2[m];
    printf("Enter %d element:\n",m);
    for(int i=0; i<m; i++)
        scanf("%d",&arr2[i]);
    int result= disjoint(arr1,arr2,n,m);
    if(result==0)
        printf("Arrays are disjoint\n");
    else
        printf("Arrays are not disjoint\n");
    return 0;
}
int disjoint(int arr1[],int arr2[],int n,int m)
{
    for(int i=0; i<n; i++)
        for(int j=0; j<m; j++)
            if(arr1[i]==arr2[j])
                return -1;
    return 0;
}