#include <stdio.h>
int main()
{
    int n=10;
   /* printf("\nEnter the n number::");
    scanf("%d", n);*/
    int a = 1, b = 10;

    /* printf("\nEnter the two number::");
     scanf("%d %d",&a,&b);*/
    int i = 1;
    while (i <= n)
    {
        printf("%d\n", a);
        a++;
        printf("%d\n", b);
        b--;
        i++;
    }
    return 0;
}