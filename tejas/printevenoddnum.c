#include <stdio.h>
int main()
{
    int n;
    int i = 0;
    printf("enter the n nubrer::");
    scanf("%d", &n);
    while (i <= n)
    {
        if (i % 2 == 0)
        {
            printf("%d ::even number\n", i);
        }
        else
        {
            printf("%d ::odd number\n ", i);
        }
        i++;
    }
    return 0;
}