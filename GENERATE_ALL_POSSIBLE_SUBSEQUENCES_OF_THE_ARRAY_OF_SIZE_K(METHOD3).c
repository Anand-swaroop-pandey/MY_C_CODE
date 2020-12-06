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
    generate_all_subsequence_size_k(arr,n,k);
}
void generate_all_subsequence_size_k(int arr[],int n,int k)
{
    printf("All possible Subsequences of size %d are:\n",k);
    if(k==0)
        printf("{EMPTY SUBSET}");
    else
    {
        int bin[n];
        generate(arr,n,bin,0,k);
    }
}
void generate(int arr[],int n,int bin[],int index,int k)
{
    if(index==n)
        print_subsequence(arr,bin,n,k);
    else
    {
        bin[index] = 0;
        generate(arr,n,bin,index+1,k);
        bin[index] = 1;
        generate(arr,n,bin,index+1,k);
    }
}
void print_subsequence(int arr[],int bin[],int n,int k)
{
    int count=0;
    for(int i=0; i<n; i++)
        if(bin[i]==1)
            count++;
    if(count==k)
    {
        printf("{ ");
        for(int i=0; i<n; i++)
            if(bin[i]==1)
                printf("%d ",arr[i]);
        printf("}\n");
    }
}
