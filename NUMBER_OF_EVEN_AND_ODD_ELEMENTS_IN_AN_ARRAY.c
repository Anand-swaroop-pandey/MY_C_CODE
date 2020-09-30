#include <stdio.h>
int main()
{
    int n;
    printf("Enter the size of the array:\n");
    scanf("%d",&n);
    int arr[n];
    printf("Enter %d elements:\n",n);
    for(int i=0; i<n; i++)
        scanf("%d",&arr[i]);
    check_even_odd_element(arr,n);
    return 0;
}
void check_even_odd_element(int arr [],int n)
{
    int even=0,odd=0;
    for(int i=0; i<n; i++)
    {
        if(arr[i]%2==0)
            even++;
        else
            odd++;
    }
    printf("Even elements are: %d\n",even);
    printf("odd elements are: %d\n",odd);
}