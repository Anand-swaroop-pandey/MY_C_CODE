/* check if all the numbers of an array can be equalized to a particular number. any element of the array can be either multiplied by 2 or by 3 any number of times.
If it's possible to make all the array elements equal with the given operation(i.e muntipling by 2 or 3) then print Yes else print No.*/
#include <stdio.h>
int main()
{
    int n;
    printf("Enter the size of an array:\n");
    scanf("%d",&n);
    int arr[n];
    printf("Enter %d elements\n",n);
    for(int i=0; i<n; i++)
        scanf("%d",&arr[i]);
    int result= check(arr,n);
    if(result==1)
        printf("YES");
    else
        printf("NO");
    return 0;
}
int check(int arr[],int n)
{
    for(int i=0; i<n; i++)
    {
        while(arr[i]%2==0)
            arr[i]=arr[i]/2;
        while(arr[i]%3==0)
            arr[i]=arr[i]/3;
    }
    for(int i=1; i<n; i++)
        if(arr[i]!=arr[0])
            return -1;
    return 1;
}
/*Algorithm

1-Start traversing the array and check if the number is divisible by 2.
2-If it is divisible, divide the array element by 2.
3-Similarly, check if the array element is divisible by 3.
4-If it is divisible, divide the array element by 3.
5-Then, check the remaining elements with the first element of the array.
6-  If they are equal, the array can be equalized.

 Approach: Any positive integer number can be factorized and written as 2^a* 3^b * 5^c * 7^d * ?..
We can multiply given numbers by 2 and 3 so we can increase a and b for them.
So we can make all a and b equal by increasing them to the same big value (e.g. 100).
But we can?t change powers of other prime numbers so they must be equal from the beginning.
We can check it by diving all numbers from input by two and by three as many times as possible.
Then all of them must be equal.*/
