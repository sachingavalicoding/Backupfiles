// decrement pattarn
#include <stdio.h>
void main()
{
    int i, j;
    for (i = 5; i > 0; i--)
    {
        for (j = 0; j < i; j++)
        {
            printf("*");
        }
        printf("\n");
    }
    /* for (i = 0; i < 5; i++)
    {
        for (j = 4; j >= i; j--)
        {
            printf("*");
        }
        printf("\n");
    } */
}
