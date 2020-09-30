#include <stdio.h>
int main(void)
{
    printf("%d%d", printf("Hello"), printf("Friends"));
    return 0;
}
/**As we said above that the printf() arguments evaluates from right to left, thus,
 *  printf("Friends") will be evaluated first and return 7, after that statement printf("Hello") will be evaluated and return 5.
 * Thus, the final output will be "friendsHello57".**/