#include <stdio.h>
int main()
{
    int n,key;
    printf("Enter the size of the Array:\n");
    scanf("%d",&n);
    int arr[n];
    printf("Enter %d elements:\n",n);
    for(int i=0; i<n; i++)
        scanf("%d",&arr[i]);
    printf("Enter the key:\n");
    scanf("%d",&key);
    int result=front_and_back_search(arr,n,key);
    if(result==-1)
        printf("%d Not Found:\n",key);
    else
        printf("%d Found at %d index:\n",key,result);
    return 0;
}
int front_and_back_search(int arr[],int n,int key)
{
    int start=0,end=n-1;
    while(start<end)
    {
        if(arr[start]==key)
            return start;
        if(arr[end]==key)
            return end;
        start++;
        end--;
    }
    return -1;
}