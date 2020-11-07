#include<stdio.h>
int main()
{
    int n;
    printf("Enter tne size of the array:\n");
    scanf("%d",&n);
    int arr[n];
    printf("Enter %d elements:\n",n);
    for(int i=0; i<n; i++)
        scanf("%d",&arr[i]);
    int  product=product_All_subarrays(arr,n);
    printf("\nProduct of all subarrays is:%d\n",product);
    return 0;
}
int  product_All_subarrays(int arr[],int len)
{
    long int product=1;
    for(int i=0; i<len; i++)
        for(int j=i; j<len; j++)
            for(int k=i; k<=j; k++)
                product=product*arr[k];
    return product;
}