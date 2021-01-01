#include<stdio.h>
int main()
{
    int n,w,max_profit;
    printf("Enter the size of weight array:\n");
    scanf("%d",&n);
    int weight[n];
    int value[n];
    printf("Enter %d weight:\n",n);
    for(int i=0; i<n; i++)
        scanf("%d",&weight[i]);
    printf("Enter %d coresponding values:\n",n);
    for(int i=0; i<n; i++)
        scanf("%d",&value[i]);
    printf("Enter capacity of Knapsack:\n");
    scanf("%d",&w);
    max_profit=knapsack(weight,value,n,w);
    printf("Maximum Profit Obtained is: %d\n",max_profit);
}
int knapsack(int weight[],int value[],int n,int w)
{
    int DP[n+1][w+1];
    for(int i=0; i<w+1; i++)
        DP[0][i]=0;
    for(int i=0; i<n+1; i++)
        DP[i][0]=0;
    for(int i=1; i<n+1; i++)
        for(int j=1; j<w+1; j++)
            if(weight[i-1]>j)
                DP[i][j]=DP[i-1][j];
            else
            {
                int include=value[i - 1]+ DP[i - 1][j - weight[i - 1]];
                int exclude= DP[i - 1][j];
                DP[i][j]=maximum(include,exclude);
            }
    return DP[n][w];
}
int maximum(int a,int b)
{
    if(a>b)
        return a;
    else
        return b;
}