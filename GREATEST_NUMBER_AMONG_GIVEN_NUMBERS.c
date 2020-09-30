#include <stdio.h>
int main()
{
    int num;
    printf("How many number Do you want to Enter:\n");
    scanf("%d",&num);
    int a[num];
    printf("Enter %d numbers:\n",num);
    for(int i=0; i<num; i++)
        scanf("%d",&a[i]);
    int greatest=a[0];
    for(int i=1; i<num; i++)
        if(a[i]>greatest)
            greatest=a[i];
    printf("Greatest number between provided %d numbers is %d\n",num,greatest);
    return 0;
}