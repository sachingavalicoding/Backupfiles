#include<stdio.h>
int evenSum(int n){
    int sum = 0;
    // frist get one by one digit 
    while(n > 0){
        int lastDigit = n % 10 ;
        if(lastDigit % 2 == 0){
          sum = sum + lastDigit;
        }
        n = n / 10;
    }
    return sum;
}
int oddSum(int n){
    int sum = 0;
    // frist get one by one digit 
    while(n > 0){
        int lastDigit = n % 10 ;
        if(lastDigit % 2 != 0){
          sum = sum + lastDigit;
        }
        n = n / 10;
    }
    return sum;
}
void main(){
    int n;
    printf("\n enter number : ");
    scanf("%d",&n);
    int ans = evenSum(n);
    printf(" \n Sum of Even Number : %d ",ans);
    int ans2 = oddSum(n);
    printf(" \n Sum of Odd Number : %d ",ans2);
}