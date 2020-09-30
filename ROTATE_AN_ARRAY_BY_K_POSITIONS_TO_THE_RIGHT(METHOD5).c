#include <stdio.h>
int main()
{
    int n,pos;
    printf("Enter the size of the Array:\n");
    scanf("%d",&n);
    if(n==0)
    {
        printf("Invalid choice\n");
        return;
    }
    int arr[n];
    printf("Enter %d element:\n",n);
    for(int i=0; i<n; i++)
        scanf("%d",&arr[i]);
    printf("Array before Rotation:\n");
    for(int i=0; i<n; i++)
        printf("%d ",arr[i]);
    printf("\nEnter position:\n");
    scanf("%d",&pos);
    rotate_right(arr,n,pos);
    printf("Rotated Array is:\n");
    for(int i=0; i<n; i++)
        printf("%d ",arr[i]);
    return 0;
}
void rotate_right(int arr[],int n,int pos)
{
    int num_sets=gcd(n,pos);  //number of sets=Gcd
    for(int i=0; i<num_sets; i++)
    {
        int j=n-1-i;
        int temp=arr[n-1-i];
        while(1)
        {
            int index=(j-pos);
            if(index<0)
                index=n+index;
            if(index==(n-1-i))
            {
                arr[j]=temp;
                break;
            }
            arr[j]=arr[index];
            j=index;
        }
    }
}
int gcd(int num1,int num2)
{
    int min=minimum(num1,num2);
    for(int i=min; i>0; i--)
        if(num1%i==0 && num2%i==0)
            return i;
}
int minimum(int num1,int num2)
{
    if(num1<num2)
        return num1;
    else
        return num2;
}


