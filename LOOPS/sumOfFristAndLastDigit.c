#include <stdio.h>
void main()
{
    // check frist and last digit
    int first;
    int last;
    int i = 0;
    int rem;
    int n;
    printf("\n enter number : ");
    scanf("%d", &n);
    while (n > 0)
    {
        rem = n % 10;
       
        if (i == 0)
        {
            last = rem;
        }
        else{
            first = rem;
        }
        i = i + 1;
        n = n / 10;
    }
    int sum = last + first;
    printf(" \n Ans = %d ", sum);
}