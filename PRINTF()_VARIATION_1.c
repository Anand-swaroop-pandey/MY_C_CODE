#include <stdio.h>
int main()
{
    printf("%d", printf("Hello"));
    return 0;
}
/*
 * printf() function evaluates from right to left, thus printf("Hello") will be evaluated first,
 * that will print "Hello" and printf("Hello") will return the total number of printed character that is 5 and
 *  then the output of this printf("Hello") after printing "Hello" will be 5.

Thus, finally, the output of the above-written statement will be: "Hello5".*/