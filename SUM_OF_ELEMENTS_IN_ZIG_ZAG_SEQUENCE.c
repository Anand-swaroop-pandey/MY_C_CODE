#include <stdio.h>
int main()
{
    int r,c;
    printf("Enter the number of rows:\n");
    scanf("%d",&r);
    printf("Enter the number of coloumns:\n");
    scanf("%d",&c);
    if(r==0 || c==0)
        return;
    int arr[r][c];
    printf("Enter %d elements:\n",r*c);
    for(int i=0; i<r; i++)
        for(int j=0; j<c; j++)
            scanf("%d",&arr[i][j]);
    printf("Entered elements are:\n");
    for(int i=0; i<r; i++)
    {
        for(int j=0; j<c; j++)
            printf("%d ",arr[i][j]);
        printf("\n");
    }
    int result=sum_of_zig_zag_elements_of_the_matrix(r,c,arr);
    printf("Sum of Zig_Zag elements of the matrix is:%d\n",result);
    return 0;
}
int sum_of_zig_zag_elements_of_the_matrix(int r,int c,int arr[][c])
{
    int sum=0;
    for(int i=0; i<r; i++)
    {
        for(int j=0; j<c; j++)
        {
            if(i==0 || i==(r-1))
                sum=sum+arr[i][j];
            if(j==(c-1-i))
                sum=sum+arr[i][j];
        }
    }
    sum=sum-(arr[0][c-1]+arr[r-1][0]);
    return sum;
}
