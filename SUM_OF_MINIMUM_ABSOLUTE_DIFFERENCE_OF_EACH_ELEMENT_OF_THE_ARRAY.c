#include <stdio.h>
int main()
{
    int n;
    printf("Enter the size of the array:\n");
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
    int sum= sum_minimum_absolute_difference(arr,n);
    printf("Sum of minimum absolute difference of each element of the array is :%d\n",sum);
    return 0;
}
int sum_minimum_absolute_difference(int arr[],int n)
{
    int size=n-1,temp[size],sum=0;
    for(int i=0; i<n; i++)
    {
        int k=0;
        for(int j=0; j<n; j++)
            if(i!=j)
                temp[k++]=abs(arr[i]-arr[j]);
        sum=sum+minimum(temp,size);
    }
    return sum;
}
int minimum(int temp[],int size)
{
    int min=temp[0];
    for(int i=1; i<size; i++)
        if(temp[i]<min)
            min=temp[i];
    return min;
}
/*
 * Using two loops. Pick an element of the array using outer loop and
 * calculate its absolute difference with rest of the array elements using inner loop.
 *  Find the minimum absolute value and add it to the sum*/