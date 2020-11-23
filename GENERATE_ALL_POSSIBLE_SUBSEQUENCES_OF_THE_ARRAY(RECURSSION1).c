#include<stdio.h>
#include<stdbool.h>
int main()
{
    int n;
    printf("Enter the size of the Array:\n");
    scanf("%d", &n);
    int arr[n];
    int bin[n];
    printf("Enter %d elements :\n",n);
    for(int i=0; i<n; i++)
        scanf("%d",&arr[i]);
    printf("All possible Subsequences are:\n");
    generate_all_subsequence(arr,n,bin,0);
}
void generate_all_subsequence(int arr[],int n,int bin[],int index)
{
    if(index==n)
        print_subsequence(arr,bin,n);
    else
    {
        bin[index] = 0;
        generate_all_subsequence(arr,n,bin,index+1);
        bin[index] = 1;
        generate_all_subsequence(arr,n,bin,index+1);
    }
}
void print_subsequence(int arr[],int bin[],int n)
{
    bool is_empty=true;
    printf("{ ");
    for(int i=0; i<n; i++)
        if(bin[i]==1)
        {
            printf("%d ",arr[i]);
            is_empty=false;
        }
    if(is_empty==true)
        printf("Empty Set");
    printf("}\n");
}
