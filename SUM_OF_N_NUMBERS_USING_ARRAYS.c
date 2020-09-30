#include <stdio.h>
int main()
{
    int n;
    printf("How many numbers you want to sum:\n");
    scanf("%d",&n);
    int a[n];
    printf("Enter %d elements\n",n);
    for(int i=0; i<n; i++)
        scanf("%d",&a[i]);
    int sum=0;
    for(int i=0; i<n; i++)
        sum=sum+a[i];
    printf("Sum of %d elements are %d:\n",n,sum);
    return 0;
}