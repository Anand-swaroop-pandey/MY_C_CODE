#include <stdio.h>
int main()
{
    int k=0, n;
    printf("Enter the size of Array:\n");
    scanf("%d",&n);
    int input[n][2], output[n][2];
    printf("Enter %d elements:\n",n);
    for(int i = 0; i < n; i++)
    {
        scanf("%d", &input[i][0]);
        input[i][1] = 0;
    }
    for(int i = 0; i < n; i++)
    {
        if(input[i][1]==1)
            continue;
        int  count = 1;
        for(int j = i + 1; j < n; j++)
            if(input[i][0] == input[j][0])
            {
                input[j][1] = 1;
                count++;
            }
        output[k][0]=input[i][0];
        output[k][1] = count;
        k++;
    }
    for(int i = 0; i < k; i++)
        for(int j = i + 1; j < k; j++)
            if(output[i][1]< output[j][1])
            {
                swap(&output[i][1],&output[j][1]);
                swap(&output[i][0],&output[j][0]);
            }
    printf("\nSorted Array Elements based on their frequency:\n");
    for(int i = 0; i < k; i++)
        for(int j=0; j<output[i][1]; j++)
            printf("%d ", output[i][0]);
    return 0;
}
void swap(int*a,int*b)
{
    int temp=*a;
    *a=*b;
    *b=temp;
}