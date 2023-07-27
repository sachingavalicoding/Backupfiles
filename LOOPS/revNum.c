#include <stdio.h>
void main()
{
    int num;
    int rem;
    int lastDigit = 0;
    printf(" Enter NUmmber : ");
    scanf("%d", &num);
    while (num > 0)
    {

        rem = num % 10;
        lastDigit = (lastDigit * 10) + rem;
        num = num / 10;
    }
    printf("%d\n ", lastDigit);
}