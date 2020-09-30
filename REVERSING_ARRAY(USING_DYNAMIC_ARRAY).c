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
    //creating temporary Array Dynamically and copying elements from oiginal array
    int*p=(int*)malloc(n*sizeof(int));
    for(int i=0; i<n; i++)
        *(p+i)=arr[n-1-i];
    //copying dynamic temporary array into original array
    for(int i=0; i<n; i++)
        arr[i]=*(p+i);
    free(p);
    //printing the reversed array
    printf("Reversed array is:\n");
    for(int i=0; i<n; i++)
        printf("%d\n",arr[i]);
    return 0;
}