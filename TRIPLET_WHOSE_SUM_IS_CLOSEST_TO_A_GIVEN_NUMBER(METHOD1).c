#include <stdio.h>
#include<limits.h>
int main()
{
    int n,key;
    printf("Enter the Size of Array\n");
    scanf("%d",&n);
    int arr[n];
    printf("Enter %d elements:\n",n);
    for(int i=0; i<n; i++)
        scanf("%d",&arr[i]);
    printf("Enter the key value:\n");
    scanf("%d",&key);
    int sum=sum_closest_to_key(arr,n,key);
    printf("Three element sum closest to zero is:%d\n",sum);
    return 0;
}
int sum_closest_to_key(int arr[],int n,int key)
{
    int closest_sum = INT_MAX;
    for(int i = 0; i < n; i++)
        for(int j =i + 1; j <n; j++)
            for(int k =j + 1; k <n; k++)
            {
                int sum=arr[i]+arr[j]+arr[k];
                if(abs(key-sum)<abs(key-closest_sum))
                    closest_sum=sum;
            }
    return closest_sum;
}

