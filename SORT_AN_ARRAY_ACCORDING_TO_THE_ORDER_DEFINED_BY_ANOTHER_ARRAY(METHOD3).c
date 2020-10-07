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
    sort_according_to_order_defined_by_other_array(arr1,arr2,n,m);
    printf("Updated Array is:\n");
    for(int i=0; i<n; i++)
        printf("%d\n",arr1[i]);
    return 0;
}
void sort_according_to_order_defined_by_other_array(int arr1[], int arr2[], int len1, int len2)
{
    int temp[len1], visited[len1];
    for(int i = 0; i < len1; i++)
    {
        temp[i] =arr1[i];
        visited[i] = 0;
    }
    insertion_sort(temp,len1);
    int ind = 0;
    for(int i = 0; i < len2; i++)
    {
        int first_occuring_index = binary_search(temp,len1,arr2[i]);
        if(first_occuring_index== -1)
            continue;
        for(int j =first_occuring_index; (j<len1 && temp[j] ==arr2[i]); j++)
        {
            arr1[ind++] = temp[j];
            visited[j] = 1;
        }
    }
    for(int i = 0; i < len1; i++)
        if(visited[i] == 0)
            arr1[ind++] = temp[i];
}
int binary_search(int arr[],int n, int key)
{
    int low=0,high=n-1;
    while(low<=high)
    {
        int mid = (low +high)/ 2;
        if(arr[mid] == key)
        {
            if(mid==0 || arr[mid-1]!=key)
                return mid;
            else if(arr[mid-1]==key)
            {
                while(arr[mid-1]==key)
                    mid--;
                return mid;
            }
        }
        else if(key> arr[mid])
            low=mid+1;
        else if(key<arr[mid])
            high=mid-1;
    }
    return -1;
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
