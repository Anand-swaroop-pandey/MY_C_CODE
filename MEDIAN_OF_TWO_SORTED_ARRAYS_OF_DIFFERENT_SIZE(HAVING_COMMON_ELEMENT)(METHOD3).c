#include <stdio.h>
int main()
{
    int n,m;
    printf("Enter size of Array1\n");
    scanf("%d",&n);
    int arr1[n];
    printf("Enter a sorted array1:\n");
    printf("Enter %d element of array 1\n",n);
    for(int i=0; i<n; i++)
        scanf("%d",&arr1[i]);
    printf("Enter size of Array2\n");
    scanf("%d",&m);
    int arr2[m];
    printf("Enter a sorted array2:\n");
    printf("Enter %d element of array 2\n",m);
    for(int i=0; i<m; i++)
        scanf("%d",&arr2[i]);
    median_sorted_arrays(arr1,arr2,n,m);
}
void  median_sorted_arrays(int arr1[],int arr2[],int n,int m)
{
    int len=n+m;
    if(len% 2 !=0)
    {
        int i=0, j=0,curr_val;
        for(int count=0; count<=len/2; count++)
        {
            if(i<n && j<m)
            {
                if(arr1[i]<=arr2[j])
                    curr_val=arr1[i++];
                else if(arr2[j]<arr1[i])
                    curr_val=arr2[j++];
            }
            else if(i<n)
                curr_val=arr1[i++];
            else if(j<m)
                curr_val=arr2[j++];
        }
        printf("medianof two sorted array is:\n");
        printf("%d\n",curr_val);
    }
    else
    {
        int i=0, j=0,curr_val,prev_val;
        for(int count = 0; count <= len/2; count++)
        {
            prev_val=curr_val;
            if(i<n && j<m)
            {
                if(arr1[i]<=arr2[j])
                    curr_val=arr1[i++];
                else if(arr2[j]<arr1[i])
                    curr_val=arr2[j++];
            }
            else if(i<n)
                curr_val=arr1[i++];
            else if(j<m)
                curr_val=arr2[j++];
        }
        printf("median of two sorted array is:\n");
        printf("%d\n",(curr_val+prev_val)/2);
    }
}