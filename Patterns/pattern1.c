#include<stdio.h>
void main(){
    int i,j;
    // outer loop 
    for(i = 0 ; i < 5; i++){
        // innner loop
        for(j = 0; j < 5; j++){
           printf("*");
        }
        printf("\n");
    }
}