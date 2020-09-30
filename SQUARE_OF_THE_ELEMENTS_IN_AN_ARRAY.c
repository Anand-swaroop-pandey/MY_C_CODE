#include <stdio.h>
int main()
{
    int n,m;
    printf("Enter the size of the array:\n");
    scanf("%d",&n);
    int arr[n];
    printf("Enter %d elements of array 1\n",n);
    for(int i=0; i<n; i++)
        scanf("%d",&arr[i]);
    printf("Entered Array is:\n");
    for(int i=0; i<n; i++)
        printf("%d ",arr[i]);
    square_of_the_elements(n,arr);
    return 0;
}
void square_of_the_elements(int n,int arr[])
{
    int k=0;
    int square[n];
    for(int i=0; i<n; i++)
        square[k++]=pow(arr[i],2);
    printf("\nSquare of the elements are:\n");
    for(int i=0; i<n; i++)
        printf("arr[%d] * arr[%d] = %d\n",i,i,square[i]);
}