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
    int product=product_All_subarrays(arr,n);
    printf("\nProduct of all subarrays is:%d\n",product);
    return 0;
}
int  product_All_subarrays(int arr[],int n)
{
    int prefix_product[n];
    long int product=1;
    prefix_product[0]=arr[0];
    for(int i=1; i<n; i++)
        prefix_product[i]=prefix_product[i-1]*arr[i];
    for(int i=0; i<n; i++)
        for(int j=i; j<n; j++)
            if(i==0)
                product=product*prefix_product[j];
            else
                product=product*(prefix_product[j]/prefix_product[i-1]);
    return product;
}