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
    int max_product=max_product_subarray(arr,n);
    printf("Maximum subarray product is %d\n",max_product);
    return 0;
}
int  max_product_subarray(int arr[],int n)
{
    int max_product_so_far=arr[0];
    int min_product_so_far=arr[0];
    int max_product=arr[0];
    for(int i=1; i<n; i++)
    {
        if(arr[i]==0)
        {
            max_product_so_far=1;
            min_product_so_far=1;
            continue;
        }
        int temp=max_product_so_far;
        max_product_so_far=maximum(arr[i],max_product_so_far*arr[i],min_product_so_far*arr[i]);
        min_product_so_far=minimum(arr[i],temp*arr[i],min_product_so_far*arr[i]);
        if(max_product_so_far>max_product)
            max_product=max_product_so_far;
    }
    if(max_product<0)
        return 0;
    else return max_product;
}
int maximum(int x,int y,int z)
{
    if(x>y)
    {
        if(y>z)
            return x;
        else
        {
            if(x>z)
                return x;
            else
                return z;
        }
    }
    else
    {
        if(y<z)
            return z;
        else
            return y;
    }
}
int minimum(int x,int y,int z)
{
    if(x<y)
    {
        if(y<z)
            return x;
        else
        {
            if(x<z)
                return x;
            else
                return z;
        }
    }
    else
    {
        if(y>z)
            return z;
        else
            return y;
    }
}