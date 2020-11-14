#include<stdio.h>
int main()
{
    int n;
    printf("Enter the size of the array:\n");
    scanf("%d",&n);
    int arr[n];
    printf("Enter %d elements:\n",n);
    for(int i=0; i<n; i++)
        scanf("%d",&arr[i]);
    majority_element(arr,n);
    return 0;
}
void majority_element(int arr[],int n)
{
    int i,count;
    for(i=0; i<n; i++)
    {
        count=1;
        for(int j=i+1; j<n; j++)
            if(arr[i]==arr[j])
                count++;
        if(count>(n/2))
            break;
    }
    if(i==n)
        printf("No Majority  element exists:\n");
    else
        printf("%d is Majority  element\n",arr[i]);
}

