#include <stdio.h>
#include <limits.h>
int main()
{
    int n,m;
    printf("Enter size of arr1[]:\n");
    scanf("%d",&n);
    int arr1[n];
    printf("Enter size of arr2[]:\n");
    scanf("%d",&m);
    int arr2[m];
    printf("Enter %d elements of arr1[]:\n",n);
    for(int i=0; i<n; i++)
        scanf("%d",&arr1[i]);
    printf("Enter %d elements of arr2[]:\n",m);
    for(int i=0; i<m; i++)
        scanf("%d",&arr2[i]);
    int sum=sum_distinct_elements(arr1,n,arr2,m);
    printf("sum of distinct element among two given arrays is %d\n",sum);
    return 0;
}
int sum_distinct_elements(int arr1[],int n,int arr2[],int m)
{
    int sum=0;
    for(int i=0; i<n; i++)
    {
        int j;
        for(j=0; j<m; j++)
            if(arr1[i]==arr2[j])
            {
                arr2[j]=INT_MIN;
                break;
            }
        if(j==m)
            sum=sum+arr1[i];
    }
    for(int i=0; i<m; i++)
        if(arr2[i]!=INT_MIN)
            sum=sum+arr2[i];
    return sum;
}
