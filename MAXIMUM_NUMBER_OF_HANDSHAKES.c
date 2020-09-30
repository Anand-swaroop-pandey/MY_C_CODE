//There are N persons in a room. Find the maximum number of Handshakes possible. Given the fact that any two persons shake hand exactly once.
//To maximize the number of handshakes, each person should shake hand with every other person in the room. For the first person, there would be N-1 handshakes. 
//For second person there would N-1 person available but he had already shaken hand with the first person. So there would be N-2 handshakes and so on.
//So, Total number of handshake = N-1 + N-2 +?.+ 1 + 0, which is equivalent to((N-1)*N)/2
// (using the formula of sum of first N natural number).
#include <stdio.h>
int main()
{
    int person;
    printf("Enter number of persons:\n");
    scanf("%d",&person);
    int result=Handshake(person);
    printf("Maximum number of handshakes possible is:%d\n",result);
    return 0;
}
int Handshake(int person)
{
    int n=(person*(person-1))/2;//sum of n numbers is:n(n-1)/2
    return n;
}