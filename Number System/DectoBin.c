#include<stdio.h>
void main(){
    int n = 130;
    int rem;
    int i = 0;
    int bin[20];
    while(n > 0){
        rem = n % 2;// check remender 
        bin[i] = rem;
        i++;
        n = n / 2;// number divde by 2 
    }
    for(int j = 0 ; j < i; j++){
        printf(" %d",bin[j]);
    }
}