/*Given two arrays A1[] and A2[], sort A1 in such a way that the relative order among the elements will be same as those are in A2.
 * For the elements not present in A2, append them at last in sorted order.
 * Example-
 *  Input: A1[] = {2, 1, 2, 5, 7, 1, 9, 3, 6, 8, 8}
       A2[] = {2, 1, 8, 3}
Output: A1[] = {2, 2, 1, 1, 8, 8, 3, 5, 6, 7, 9}  */
#include <stdio.h>
#include<limits.h>
int main()
{
    int n,m;
    printf("Enter the size of the Array 1:\n");
    scanf("%d",&n);
    printf("Enter the size of the Array 2:\n");
    scanf("%d",&m);
    if(n==0 || m==0)
    {
        printf("Invalid choice:\n");
        return;
    }
    int arr1[n];
    int arr2[m];
    printf("Enter %d  elements of array 1:\n",n);
    for(int i=0; i<n; i++)
        scanf("%d",&arr1[i]);
    printf("Enter %d  elements of array 2:\n",m);
    for(int i=0; i<m; i++)
        scanf("%d",&arr2[i]);
    sort_according_to_order_defined_by_other_array(arr1,n,arr2,m);
    printf("Updated Array is:\n");
    for(int i=0; i<n; i++)
        printf("%d\n",arr1[i]);
    return 0;
}
void sort_according_to_order_defined_by_other_array(int arr1[],int n,int arr2[],int m)
{
    int freq_arr[n],temp[n],k=0;
    frequency(arr1,n,freq_arr);
    for(int i=0; i<m; i++)
    {
        int first_occuring_index=linear_search(arr2[i],arr1,n);
        while(freq_arr[first_occuring_index]>0)
        {
            temp[k++]=arr1[first_occuring_index];
            freq_arr[first_occuring_index]--;
        }
    }
    if(k==n)
    {
        for(int i=0; i<n; i++)
            arr1[i]=temp[i];
        return;
    }
    for(int i=0; i<m; i++)
        for(int j=0; j<n; j++)
            if(arr2[i]==arr1[j])
                arr1[j]=INT_MIN;
    int sort=k;
    for(int i=0; i<n; i++)
        if(arr1[i]!=INT_MIN)
            temp[k++]=arr1[i];
    insertion_sort(temp,n,sort);
    for(int i=0; i<n; i++)
        arr1[i]=temp[i];
}
void frequency(int arr[],int n,int freq_arr[])
{
    int counter;
    for(int i=0; i<n; i++)
        freq_arr[i]=-1;
    for(int i=0; i<n; i++)
    {
        if(freq_arr[i]==0)
            continue;
        counter=1;
        for(int j=i+1; j<n; j++)
            if(arr[i]==arr[j])
            {
                counter++;
                freq_arr[j]=0;
            }
        freq_arr[i]=counter;
    }
}
void insertion_sort(int temp[],int n,int start)
{
    for(int i=start+1; i<n; i++)
    {
        int tmp=temp[i];
        int j=i-1;
        while(temp[j]>tmp && j>=start)
        {
            temp[j+1]=temp[j];
            j--;
        }
        temp[j+1]=tmp;
    }
}
int linear_search(int key,int arr[],int n)
{
    for(int i=0; i<n; i++)
        if(arr[i]==key)
            return i;
}