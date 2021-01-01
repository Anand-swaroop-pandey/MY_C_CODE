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
    if(n==0 || w==0)
        return 0;
    if(weight[n-1]>w)
        return knapsack(weight,value,n-1,w);
    else
    {
        int exclude=knapsack(weight,value,n-1,w);
        int include=value[n-1]+knapsack(weight,value,n-1,w-weight[n-1]);
        int max_profit=maximum(include,exclude);
        return max_profit;
    }
}
int maximum(int a,int b)
{
    if(a>b)
        return a;
    else
        return b;
}