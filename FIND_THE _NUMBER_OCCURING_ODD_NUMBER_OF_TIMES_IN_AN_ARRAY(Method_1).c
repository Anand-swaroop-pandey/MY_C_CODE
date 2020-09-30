//Given an array of positive integers. All numbers occur even number of times except one number which occurs odd number of times. Find the number
#include <stdio.h>
int main()
{
    int n;
    printf("Enter the size of the array\n");
    scanf("%d",&n);
    int arr[n];
    printf("Enter %d elements\n",n);
    for(int i=0; i<n; i++)
        scanf("%d",&arr[i]);
    find_an_element_occuring_odd_number_of_times(arr,n);
    return 0;
}
void find_an_element_occuring_odd_number_of_times(int arr[],int n)
{
    int count;
    for(int i=0; i<n; i++)
    {
        count=0;
        for(int j=0; j<n; j++)
            if(arr[i]==arr[j])
                count++;
        if(count%2!=0)
        {
            printf("Element occcuring Odd number of times is: %d\n",arr[i]);
            break;
        }
    }
}