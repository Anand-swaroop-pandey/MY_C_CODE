#include <stdio.h>
int main()
{
    int n;
    printf("Enterthe size of the array:\n");
    scanf("%d",&n);
    int arr[n];
    printf("Enter %d elements:\n",n);
    for(int i=0; i<n; i++)
        scanf("%d",&arr[i]);
    int len=sizeof(arr)/sizeof(arr[0]);
    duplicate_sorted(arr,len);
    printf("updated array is:\n");
    for(int i=0; arr[i]!=-1; i++)
        printf("%d\n",arr[i]);
    return 0;
}
void duplicate_sorted(int arr[],int len)
{
    int i=0,j=0;
    while(i<len-1)//so that array does goes out of bound
    {
        if(arr[i]!=arr[i+1])
            arr[j++]=arr[i];
        i++;
    }
    arr[j]=arr[len-1];//to avoid out of bound array
    j++;
    arr[j]=-1;
}
