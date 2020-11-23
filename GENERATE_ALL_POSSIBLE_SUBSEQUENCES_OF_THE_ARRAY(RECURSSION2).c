#include<stdio.h>
#include<stdbool.h>
int main()
{
    int n;
    printf("Enter the size of the Array:\n");
    scanf("%d", &n);
    int arr[n];
    int subsequences[n];
    printf("Enter %d elements :\n",n);
    for(int i=0; i<n; i++)
        scanf("%d",&arr[i]);
    printf("All possible Subsequences are:\n");
    generate_all_subsequence(arr,n,0,subsequences,0);
}
void generate_all_subsequence(int arr[],int n,int index,int ss[],int ss_index)
{
    if(index==n)
        print_subsequence(ss,ss_index);
    else
    {
        generate_all_subsequence(arr,n,index+1,ss,ss_index);
        ss[ss_index] =arr[index];
        generate_all_subsequence(arr,n,index+1,ss,ss_index+1);
    }
}
void print_subsequence(int ss[],int ss_index)
{
    bool is_empty=true;
    printf("{ ");
    for(int i=0; i<ss_index; i++)
    {
        printf("%d ",ss[i]);
        is_empty=false;
    }
    if(is_empty==true)
        printf("Empty Set");
    printf("}\n");
}

