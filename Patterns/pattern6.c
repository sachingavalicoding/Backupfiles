#include<stdio.h>
void main(){
    int i,j;
    // outer loop 
    for(i = 5; i > 0; i--){
        // innner loop
        for(j = 5; j >=i ; j--){
           printf("%d  ",j);
        }
        printf("\n");
    }
}