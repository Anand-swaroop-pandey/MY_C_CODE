#include <stdio.h>
int main()
{
    int n,m;
    printf("Enter the Size of the array1:\n");
    scanf("%d",&n);
    printf("Enter the Size of the array2:\n");
    scanf("%d",&m);
    int arr1[n],arr2[m];
    printf("Enter %d Elements of arr1[]:\n",n);
    for(int i=0; i<n; i++)
        scanf("%d",&arr1[i]);
    printf("Enter %d Elements of arr2[]:\n",m);
    for(int i=0; i<m; i++)
        scanf("%d",&arr2[i]);
    int sum=sum_overlapping_element(arr1,arr2,n,m);
    printf("Sum of Overlapping element is:%d\n",sum);
    return 0;
}
int sum_overlapping_element(int arr1[],int arr2[],int n,int m)
{
    int sum=0;
    for(int i=0; i<n; i++)
        for(int j=0; j<m; j++)
            if(arr1[i]==arr2[j])
                sum=arr1[i]+arr2[j];
    return sum;
}