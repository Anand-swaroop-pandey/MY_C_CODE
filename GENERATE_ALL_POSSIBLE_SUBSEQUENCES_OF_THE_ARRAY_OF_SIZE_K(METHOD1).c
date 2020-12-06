#include<stdio.h>
#include<stdbool.h>
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
    printf("All possible Subsequences of size %d are:\n",k);
    generate_all_subsequence_size_k(arr,n,k);
}
void generate_all_subsequence_size_k(int arr[],int n,int k)
{
    if(k==0)
    {
        printf("{EMPTY SET}");
        return;
    }
    int pow_set_size = power(2,n);
    for(int i= 1; i<pow_set_size ; i++)
    {
        int count=count_set_bits(i,k);
        if(count==k)
        {
            printf("{ ");
            for(int j = 0; j < n; j++)
            {
                int mask=1;
                mask=mask<<j;
                int temp=(i & mask);
                if(temp!=0)
                    printf("%d ", arr[j]);
            }
            printf("}\n");
        }
    }
}
int count_set_bits(int num,int k)
{
    int count_set_bits=0;
    while(num!=0)
    {
        int bit=num &1;
        if(bit==1)
            count_set_bits++;
        if(count_set_bits>k)
            return -1;
        num=num>>1;
    }
    return count_set_bits;
}
int power(int num,int exp)
{
    int p=1;
    for(int i=0; i<exp; i++)
        p=p*num;
    return p;
}