#include<stdio.h>
int main()
{
    int n,k;
    printf("Enter the size of the Array:\n");
    scanf("%d", &n);
    int arr[n];
    int subsequences[n];
    printf("Enter %d elements :\n",n);
    for(int i=0; i<n; i++)
        scanf("%d",&arr[i]);
    printf("Enter the value of K:\n");
    scanf("%d",&k);
    printf("All possible Subsequences of size %d are:\n",k);
    generate_all_subsequence(arr,n,0,subsequences,0,k);
}
void generate_all_subsequence(int arr[],int n,int index,int ss[],int ss_index,int k)
{
    if(index==n)
        print_subsequence(ss,ss_index,k);
    else
    {
        generate_all_subsequence(arr,n,index+1,ss,ss_index,k);
        ss[ss_index] =arr[index];
        generate_all_subsequence(arr,n,index+1,ss,ss_index+1,k);
    }
}
void print_subsequence(int ss[],int ss_index,int k)
{
    int count=0;
    for(int i=0; i<ss_index; i++)
        count++;
    if(count==k)
    {
        printf("{ ");
        for(int i=0; i<ss_index; i++)
            printf("%d ",ss[i]);
        printf("}\n");
    }
}

