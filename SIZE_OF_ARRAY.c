#include <stdio.h>
int main()
{
    int arr[]= {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16};
    int size=sizeof(arr)/sizeof(arr[0]);
    printf("Size of array is: %d\n",size);
    return 0;
}