#include <stdio.h>
void main()
{
    int i, j, k;
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j <= i; j++)
        {
            printf("*");
        }
        for (k = 4; k > i; k--)
        {
            printf(" ");
        }
        for (k = 4; k > i; k--)
        {
            printf(" ");
        }
         for (j = 0; j <= i; j++)
        {
            printf("*");
        }
        printf("\n");
    }
}