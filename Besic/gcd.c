#include<stdio.h>
int main(){
    int a,b;
    printf("Enter two number");
    scanf("%d%d",&a,&b);
    int num;
    if(a<b){
     num = b;
    }
    else{
        num = a;
    }
    int gcd;
    for(int i = 1; i <= num ; i++){
        if(a % i == 0  &&  b % i == 0){
          gcd = i;
          printf("\n  GCD of a and b  %d ",gcd);
        }
    }

    int lcm = (a*b)/gcd;
    printf("\n lcm  = %d ",lcm);
    return 0;
}