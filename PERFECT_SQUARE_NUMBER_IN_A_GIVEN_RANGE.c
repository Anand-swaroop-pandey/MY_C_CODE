#include <stdio.h>
#include<math.h>
int main()
{
    int low,high;
    printf("Enter Low value:\n");
    scanf("%d",&low);
    printf("Enter High value:\n");
    scanf("%d",&high);
    printf("perfect square numbers Between %d and %d are:\n",low,high);
    Range_perfect_square_number(low,high);
    return 0;
}
void  Range_perfect_square_number(int low,int high)
{
    for(int num=(low+1); num<high; num++)
    {
        float f=sqrt(num);
        int i=f;
        if(i==f)
            printf("%d\n",num);
    }
}