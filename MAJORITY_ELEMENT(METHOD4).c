#include<stdio.h>
int main()
{
    int n;
    printf("Enter the size of the array:\n");
    scanf("%d",&n);
    int arr[n];
    printf("Enter %d elements:\n",n);
    for(int i=0; i<n; i++)
        scanf("%d",&arr[i]);
    majority_element(arr,n);
    return 0;
}
void majority_element(int arr[],int n)
{
    int candidate=find_candidate(arr,n);
    int check=is_majority(candidate,arr,n);
    if(check==-1)
    {
        printf("Majority Element Doesnot Exist\n");
        return;
    }
    printf("%d is Majority Element\n",candidate);
}
int find_candidate(int arr[],int n)
{
    int majority_candidate=arr[0],count=1;
    for(int i=1; i<n; i++)
    {
        if(arr[i]==majority_candidate)
            count++;
        else
            count--;
        if(count==0)
        {
            majority_candidate=arr[i];
            count=1;
        }
    }
    return majority_candidate;
}
int is_majority(int key,int arr[],int n)
{
    int count=0;
    for(int i=0; i<n; i++)
        if(arr[i]==key)
            count++;
    if(count>(n/2))
        return 1;
    else
        return -1;
}