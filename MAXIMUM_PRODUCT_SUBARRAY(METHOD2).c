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
    long int product,max_product=INT_MIN,starting_index,ending_index;
    for(int i=0; i<n; i++)
    {
        product=1;
        for(int j=i; j<n; j++)
        {
            product=product*arr[j];
            if(product>max_product)
            {
                max_product=product;
                starting_index=i;
                ending_index=j;
            }
        }
    }
    printf("\nMaximum product  subarray has:");
    printf("Starting index=%d and Ending_index=%d\n",starting_index,ending_index);
    printf("Maximum product is:%ld",max_product);
}
