#include<stdio.h>
void main(){
    int sum = 0;
    int n = 12;
    for(int i = 1; i <=  n ; i++){
        if(i % 2 != 0){
            sum = sum + i;
        }
    }
    printf("\n Sum = %d ",sum);
}