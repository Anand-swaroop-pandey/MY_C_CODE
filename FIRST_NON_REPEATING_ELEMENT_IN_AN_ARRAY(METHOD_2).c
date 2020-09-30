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
void first_non_repeating_element(int arr[],int len)
{
    int count;
    for(int i=0; i<len; i++)
    {
        count=1;
        for(int j=0; j<len; j++)
            if(arr[i]==arr[j])
                count++;
        if(count==1)
        {
            printf("%d is first Non repeating Element",arr[i]);
            return;
        }
    }
    printf("No NON-repeating element is found:\n");
}