#include <stdio.h>
int main()
{
    int n;
    printf("Enter the size of the Array:\n");
    scanf("%d",&n);
    int arr[n];
    printf("Enter %d elements in Unsorted Fashion ranging from 1 to %d containing no duplicates:\n",n,n);
    for(int i=0; i<n; i++)
        scanf("%d",&arr[i]);
    printf("Entered Elements are:\n",n);
    for(int i=0; i<n; i++)
        printf("%d ",arr[i]);
    int min=minimum_swaps(arr,n);
    printf("Minimum number of swaps required to sort the given array in ascending order is %d\n",min);
    return 0;
}
int minimum_swaps(int arr[],int n)
{
    int visited[n];
    for(int i=0; i<n; i++)
        visited[i]=0;//0 shows non-visited cells
    int total_swap=0;
    for(int i=0; i<n; i++)
        if(visited[i]==0)
        {
            int a=i;
            int b=arr[i]-1;
            int swap=0;
            while(b!=i)
            {
                //swapping takes place between arr[a] and arr[b]
                visited[a]=1;// 1 shows visited cells
                visited[b]=1;
                swap++;
                a=b;
                b=arr[a]-1;
            }
            total_swap=total_swap+swap;
        }
    return total_swap;
}
