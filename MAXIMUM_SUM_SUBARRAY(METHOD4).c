#include <stdio.h>
int main()
{
    int n;
    printf("Enter the size of the Array:\n");
    scanf("%d",&n);
    int arr[n];
    printf("Enter %d elements\n",n);
    for(int i=0; i<n; i++)
        scanf("%d",&arr[i]);
    kadanes_algorithm(arr,n);
    return 0;
}
void kadanes_algorithm(int arr[], int n)
{
    int max=arr[0],max_so_far=arr[0];
    for(int i=1; i<n; i++)
    {
        int sum=arr[i]+max_so_far;
        max_so_far=maximum(arr[i],sum);
        if(max_so_far>max)
            max=max_so_far;
    }
    printf("Maximum sum =%d\n",max);
}
int maximum(int a,int b)
{
    if(a>=b)
        return a;
    else
        return b;
}
