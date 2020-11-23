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
    generate_all_subsequence(arr,n);
}
void generate_all_subsequence(int arr[],int n)
{
    int pow_set_size = power(2,n);
    bool is_empty=true;
    for(int i= 0; i<pow_set_size ; i++)
    {
        printf("{ ");
        for(int j = 0; j < n; j++)
        {
            int mask=1;
            mask=mask<<j;
            int temp=(i & mask);
            if(temp!=0)
            {
                printf("%d ", arr[j]);
                is_empty=false;
            }
        }
        if(is_empty==true)
            printf("Empty Set");
        printf("}");
        printf("\n");
    }
}
int power(int num,int exp)
{
    int p=1;
    for(int i=0; i<exp; i++)
        p=p*num;
    return p;
}