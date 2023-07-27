#include <stdio.h>
void main()
{
    int n = 1000000;
    int rem;
    int i = 0;
    int bin[20];
    while (n > 0)
    {
        rem = n % 16; // check remender

        bin[i] = rem;
        i++;
        n = n / 16; // number divde by 2
    }
    for (int j = i; j >= 0; j--)
    {
        if (bin[j] >= 10 && bin[j] <= 15)
        {
            if (bin[j] == 10)
            {
                bin[j] = 'A';
                printf(" %c", bin[j]);
            }
            if (bin[j] == 11)
            {
                bin[j] = 'B';
                printf(" %c", bin[j]);
            }
            if (bin[j] == 12)
            {
                bin[j] = 'C';
                printf(" %c", bin[j]);
            }
            if (bin[j] == 13)
            {
                bin[j] = 'D';
                printf(" %c", bin[j]);
            }
            if (bin[j] == 14)
            {
                bin[j] = 'E';
                printf(" %c", bin[j]);
            }
            if (bin[j] == 15)
            {
                bin[j] = 'F';
                printf(" %c", bin[j]);
            }
        }

        else
        {
            printf(" %d", bin[j]);
        }
    }
}