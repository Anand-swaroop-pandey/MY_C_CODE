#include<stdio.h>
int main()
{
    int n,k;
    printf("Enter the size of the Array:\n");
    scanf("%d", &n);
    int arr[n];
    printf("Enter %d elements :\n",n);
    for(int i=0; i<n; i++)
        scanf("%d",&arr[i]);
    printf("Enter the Value of K:\n");
    scanf("%d",&k);
    printCombination(arr,n,k);
}
void printCombination(int arr[], int n, int k)
{
    printf("All possible Comination of  %d Elements in Array are:\n",k);
    if(k==0)
        printf("NO combinations");
    else
    {
        int data[k];
        combination_k_elements(arr, data, 0, n-1, 0, k);
    }
}
void combination_k_elements(int arr[],int data[], int start, int end,int index, int k)
{
    if(index == k)
        print(data,k);
    else
        for(int i=start; i<=end && (end-i+1) >= (k-index); i++)
        {
            data[index] = arr[i];
            combination_k_elements(arr, data, i+1, end, index+1, k);
        }
}
void  print(int data[],int k)
{
    printf("{ ");
    for(int i=0; i<k; i++)
        printf("%d ", data[i]);
    printf("}\n");
}
