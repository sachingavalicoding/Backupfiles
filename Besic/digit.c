#include <stdio.h>
#include <conio.h>
int main()
{
    int n, num;
    int sum = 0;
    printf("enter two numbers:");
    scanf("%d", &n);
    int temp = n ;
    while (n > 0)
    {
        num = n % 10;
        int num1 = num * num * num;
        sum = sum + num1;
      
        n /= 10;
    }
    printf("sum = %d",sum);
     if(sum == temp ){
        printf(" \n Yes ");
     }
     else{

     printf("\n No");
     }
    return 0;
}
