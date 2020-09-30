#include <stdio.h>
#define MAX_SIZE 100
int main()
{
    int arr[MAX_SIZE],n;
    char choice;
    printf("How many elements do you want to insert:\n");
    scanf("%d",&n);
    if(n==0)
        return;
    if(n>MAX_SIZE)
    {
        printf("Array size exceeded\nyou can enter upto %d elements only",MAX_SIZE);
        return;
    }
    else
    {
        printf("Enter %d elements:\n",n);
        for(int i=0; i<n; i++)
            scanf("%d",&arr[i]);
        printf("Elements are:\n");
        for(int i=0; i<n; i++)
            printf("%d\n",arr[i]);
        printf("\nDo you want to enter more elements:\n");
        printf("if Yes press : Y\n");
        fflush(stdin);
        scanf("%c",&choice);
        if(choice=='Y')
            insert_element(arr,n);
        else
            return;
    }
    return 0;
}
void insert_element(int arr[],int n)
{
    int check=is_full(n);
    if(check==0)
    {
        printf("Array is full,no space left\n");
        return;
    }
    else
        printf("array can accomodate %d more element:\n\n",check);
    int pos,ele;
    printf("Enter the position at which you want to insert\n");
    scanf("%d",&pos);//index=position-1
    printf("Enter the element you want to insert:\n");
    scanf("%d",&ele);
    for(int i=(n-1); i>=(pos-1); i--)
        arr[i+1]=arr[i];
    arr[pos-1]=ele;
    n++;
    printf("Updated array is:\n");
    for(int i=0; i<n; i++)
        printf("%d\n",arr[i]);
}
int is_full(int n)
{
    int num=MAX_SIZE-n;
    return num;
}