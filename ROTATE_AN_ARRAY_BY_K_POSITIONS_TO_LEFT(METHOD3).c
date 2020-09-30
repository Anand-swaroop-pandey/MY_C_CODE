#include <stdio.h>
int main()
{
    int n,pos;
    printf("Enter the Size of the Array:\n");
    scanf("%d",&n);
    if(n==0)
    {
        printf("Invalid_choice:\n");
        return;
    }
    int arr[n];
    printf("Enter %d element:\n",n);
    for(int i=0; i<n; i++)
        scanf("%d",&arr[i]);
    printf("Arrray before Rotation:\n");
    for(int i=0; i<n; i++)
        printf("%d ",arr[i]);
    printf("\nEnter the position:\n");
    scanf("%d",&pos);
    rotate_left(arr,n,pos);
    printf("Rotated array is:\n");
    for(int i=0; i<n; i++)
        printf("%d ",arr[i]);
    return 0;
}
void rotate_left(int arr[],int n,int pos)
{
    int num_sets=gcd(n,pos);  //number of sets=Gcd
    for(int i=0; i<num_sets; i++)
    {
        int j=i;
        int temp=arr[i];
        while(1)
        {
            int index=(j+pos)%n;
            if(index==i)
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



