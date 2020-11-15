#include <stdio.h>
int main()
{
    int n;
    printf("Enter the size of the Array:\n");
    scanf("%d",&n);
    int arr[n];
    printf("Enter %d elements:\n",n);
    for(int i=0; i<n; i++)
        scanf("%d",&arr[i]);
    int index=equilibrium(arr,n);
    if(index==-1)
        printf("NOT_POSSIBLE");
    else
    {
        printf("Array can divided into two equal sum subarrays,on removing Element present at %d index\n",index);
        printf("( ");
        for(int i=0; i<index; i++)
            printf("%d ",arr[i]);
        printf(")\n");
        printf("( ");
        for(int i=index+1; i<n; i++)
            printf("%d ",arr[i]);
        printf(")");
    }
    return 0;
}
int equilibrium(int arr[],int n)
{
    int sum=0,left_sum=0;
    for(int i=0; i<n; i++)
        sum=sum+arr[i];
    for(int i=0; i<n; i++)
    {
        sum=sum-arr[i];//right_sum
        if(left_sum==sum)
            return i;
        left_sum=left_sum+arr[i];
    }
    return -1;
}
/*Input:  arr = [6, 2, 3, 2, 1]
Output:  true
Explanation:  On removing element 2 at index 1,
the array gets divided into two subarrays [6]
 and [3, 2, 1] having equal sum

Input:  arr = [6, 1, 3, 2, 5]
Output:  true
Explanation:  On removing element 3 at index 2,
the array gets divided into two subarrays [6, 1]
and [2, 5] having equal sum.

Input:  arr = [6, -2, -3, 2, 3]
Output: true
Explanation:  On removing element 6 at index 0,
the array gets divided into two sets []
and [-2, -3, 2, 3] having equal sum

Input:  arr = [6, -2, 3, 2, 3]
Output: false*/

