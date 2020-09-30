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
    int temp[len];
    for(int k=0; k<len; k++)
        temp[k]=-1;
    while(i<len-1)//so that array does goes out of bound
    {
        if(arr[i]!=arr[i+1])
            temp[j++]=arr[i];
        i++;
    }
    temp[j]=arr[len-1];//to avoid out of bound array
    copy(arr,temp);
}
void copy(int arr[],int temp[])
{
    int i=0;
    while(temp[i]!=-1)
    {
        arr[i]=temp[i];
        i++;
    }
    arr[i]=-1;
}