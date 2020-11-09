#include<stdio.h>
#include<limits.h>
int main()
{
    int n;
    printf("Enter the size of the array:\n");
    scanf("%d",&n);
    int arr[n];
    printf("Enter %d elements:\n",n);
    for(int i=0; i<n; i++)
        scanf("%d",&arr[i]);
    max_product_subarray(arr,n);
    return 0;
}
void  max_product_subarray(int arr[],int n)
{
    long int product=1,max_product=INT_MIN;
    for(int i=0; i<n; i++)
    {
        product=product*arr[i];
        max_product=maximum(product,max_product);
        if(product==0)
            product=1;
    }
    product=1;
    for(int i=n-1; i>=0; i--)
    {
        product=product*arr[i];
        max_product=maximum(product,max_product);
        if(product==0)
            product=1;
    }
    printf("Maximum product is:%d",max_product);
}
int maximum(int x,int y)
{
    if(x>=y)
        return x;
    else
        return y;
}
