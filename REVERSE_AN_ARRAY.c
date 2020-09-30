#include <stdio.h>
int main()
{
    int n;
    printf("Enter the size of the array\n");
    scanf("%d",&n);
    int arr[n];
    printf("Enter %d Elements\n",n);
    for(int i=0; i<n; i++)
        scanf("%d",&arr[i]);
    //temporary array for reversing the array
    int dup[n];
    for(int i=0; i<n; i++)
        dup[i]=arr[n-1-i];
    //copying temporary array into original array
    for(int i=0; i<n; i++)
        arr[i]=dup[i];
    //printing the reversed array
    printf("Reversed array is:\n");
    for(int i=0; i<n; i++)
        printf("%d\n",arr[i]);
    return 0;
}