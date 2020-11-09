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
    int max_product=INT_MIN,starting_index,ending_index,end;
    for(int i=0; i<n; i++)
        for(int j=i; j<n; j++)
        {
            long int product=1;
            for(int k=i; k<=j; k++)
            {
                product=product*arr[k];
                end=k;
            }
            if(product>max_product)
            {
                max_product=product;
                starting_index=i;
                ending_index=end;
            }
        }
    printf("\nMaximum product  subarray has:");
    printf("Starting index=%d and Ending_index=%d\n",starting_index,ending_index);
    printf("Maximum product is:%ld",max_product);
}
