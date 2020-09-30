#include <stdio.h>
int main()
{
    int n;
    printf("How many numbers you want to find Average:\n");
    scanf("%d",&n);
    int a[n];
    printf("Enter %d elements\n",n);
    for(int i=0; i<n; i++)
        scanf("%d",&a[i]);
    int sum=0;
    for(int i=0; i<n; i++)
        sum=sum+a[i];
    int avg=sum/n;//sum of elements divided by total number of elements
    printf("Average of %d numbers is %d\n",n,avg);
    return 0;
}