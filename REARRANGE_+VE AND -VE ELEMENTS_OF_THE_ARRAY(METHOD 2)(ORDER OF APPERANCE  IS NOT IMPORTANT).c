#include <stdio.h>
int main()
{
    int n;
    printf("Enter the size of the Array:\n");
    scanf("%d",&n);
    int arr[n];
    printf("Enter %d elements:\n",n);
    for(int i=0; i<n; i++)
        scanf("%d",&arr[i]);
    rearrange(arr,n);
    printf("Rearranged elements are:\n");
    for(int i=0; i<n; i++)
        printf("%d\n",arr[i]);
    return 0;
}
void rearrange(int arr[],int n)
{
    int left=0;
    int right=n-1;
    while(left<right)
    {
        while(arr[left]>0)
            left++;
        while(arr[right]<0)
            right--;
        if(left<right)
        {
            swap(&arr[left],&arr[right]);
            left++;
            right--;
        }
    }
}
void swap(int*a,int*b)
{
    int temp=*a;
    *a=*b;
    *b=temp;
}