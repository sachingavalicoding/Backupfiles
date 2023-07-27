#include <stdio.h>
#include <conio.h>
int main()
{
    int i, j;
    i = 1;
    while (i <= 5)
    {
        j = 1;
        while (j <= i)
        {
            printf("%d", i);
            printf("\n");
            j++;
        }
        i++;
    }
    return 0;
}
/*
 1
 2 2
 3 3 3
 4 4 4 4
 5 5 5 5 5*/