#include <stdio.h>
int main()
{
    int n;
    printf("Enter the size of the Array:\n");
    scanf("%d",&n);
    if(n==0)
    {
        printf("Invalid choice\n");
        return;
    }
    int arr[n];
    printf("Enter %d elements:\n",n);
    for(int i=0; i<n; i++)
        scanf("%d",&arr[i]);
    rank_of_elements(arr,n);
    return 0;
}
void  rank_of_elements(int arr[], int n)
{
    float temp[n];
    for(int i=0; i<n; i++)
        temp[i]=arr[i];
    insertion_sort(arr,n);
    for(int i= 0; i < n; i++)
    {
        int sum_rank=i+1;
        int count=1;
        while(arr[i]==arr[i+1] && (i+1)<n)
        {
            i++;
            sum_rank=sum_rank+i+1;
            count++;
        }
        float avg_rank=(float)sum_rank/(float)count;
        for(int j=0; j<n; j++)
            if(temp[j]==arr[i])
                temp[j]=avg_rank;
    }
    printf("Rank is:\n");
    for(int i=0; i<n; i++)
        printf("%0.2f\n",temp[i]);
}
void insertion_sort(int arr[],int n)
{
    for(int i=1; i<n; i++)
    {
        int temp=arr[i];
        int j=i-1;
        while(arr[j]>temp && j>=0)
        {
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=temp;
    }
}

