#include <stdio.h>
int main()
{
    int n;
    printf("Enter the size of array:\n");
    scanf("%d",&n);
    int arr[n];
    printf("Enter %d elements:\n",n);
    for(int i=0; i<n; i++)
        scanf("%d",&arr[i]);
    first_non_repeating_element(arr,n);
    return 0;
}
void  first_non_repeating_element(int arr[],int len)
{
    for(int i=0; i<len; i++)
    {
        if(arr[i]==-1020)
            continue;
        int j;
        for(j=i+1; j<len; j++)
            if(arr[i]==arr[j])
            {
                arr[j]=-1020;
                break;
            }
        if(j==len)
        {
            printf("%d is first non repeating element:\n",arr[i]);
            return;
        }
    }
    printf("\nNO non repeating element exists\n");
}