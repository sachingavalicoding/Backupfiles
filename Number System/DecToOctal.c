#include<stdio.h>
void main(){
    int n = 25;
    int rem;
    int i = 0;
    int bin[20];
    while(n > 0){
        rem = n % 8;// check remender 
        bin[i] = rem;
        i++;
        n = n / 8;// number divde by 2 
    }
    for(int j = i-1 ; j >= 0; j--){
        printf(" %d",bin[j]);
    }
}