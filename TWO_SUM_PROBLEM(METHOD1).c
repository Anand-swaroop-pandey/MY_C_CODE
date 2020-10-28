#include<stdio.h>
int main()
{
    int n,key;
    printf("Enter the Size of the Array:\n");
    scanf("%d",&n);
    int arr[n];
    printf("Enter %d elements:\n",n);
    for(int i=0; i<n; i++)
        scanf("%d",&arr[i]);
    printf("Enter key value:\n");
    scanf("%d",&key);
    find(arr,n,key);
    return 0;
}
void find(int arr[],int n,int key)
{
    int index1=-1,index2=-1;
    for(int i=0; i<n; i++)
        for(int j=i+1; j<n; j++)
            if(arr[i]+arr[j]==key)
            {
                index1=i;
                index2=j;
                break;
            }
    if(index1==-1 && index2==-1)
        printf("NO INDEX FOUND");
    else
        printf("FOUND INDEXES ARE:%d AND %d\n",index1,index2);
}