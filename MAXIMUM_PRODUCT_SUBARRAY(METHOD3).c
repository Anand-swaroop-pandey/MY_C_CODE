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
    printf("Maximum product is %d\n",max_product);
    return 0;
}
int max_product_subarray(int arr[],int n)
{
    long int curr_product=1,max_product=0;
    for(int i=0; i<n; i++)
    {
        if(arr[i]==0)
        {
            curr_product=1;
            continue;
        }
        curr_product=curr_product*arr[i];
        if(curr_product>max_product)
            max_product=curr_product;
    }
    curr_product=1;
    for(int i=n-1; i>=0; i--)
    {
        if(arr[i]==0)
        {
            curr_product=1;
            continue;
        }
        curr_product=curr_product*arr[i];
        if(curr_product>max_product)
            max_product=curr_product;
    }
    return max_product;
}
