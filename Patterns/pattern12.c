#include <stdio.h>
void main()
{
    int i;
    for (i = 3; i >= 1; i--)
    {
        int k = 3;
        for (int j = 1; j <= i * 3; j++)
        {
            printf(" %d ", j);
            if (k % j == 0)
            {
                k = k - 1;
                /*  printf(" %d ", k); */
            }
        }

        printf("\n");
    }
}