#include<stdio.h>
int helper(int arr[],int n,int low,int high,int k){
    while(low <= high){
        int temp = arr[low];
        arr[low] = arr[high];
        arr[high] = temp;
        low = low + 1;
        high = high -1; 
    }
}
int helper2(int arr[],int n,int low,int high){
    for(int i = high; i >= low; i--){
        printf(" %d ",arr[i]);
    }
}
void printArray(int arr[],int n)
{
    printf("\n Arrays ELemnets : ");
   for(int i = 0; i < n ; i++){
    printf(" %d ",arr[i]);
   }
}
// 3 using recursion 
/* int reverseArr(int arr[],int n,int idx){
    if(idx == -1 ){
        return;
    }
    printf(" %d ",arr[idx]);
     reverseArr(arr,n,idx-1);
} */
void main(){
    int arr[] = {12,34,54,64,34,78,10};
    int n = 7;
    int idx = 5;
    int k = 3;
    printf("\n  Before Arrays ELemnets : ");
    printArray(arr,n);
    // reverse array 

    // 1 using for loop 
   /*  printf("\n  After Arrays ELemnets : ");
    for(int i = n-1; i >= 0; i--){
        printf(" %d ",arr[i]);
    } */
    // 2. using two pointers
   /*  int low = 0;
    int k = 3;
    int high = n-1;
    while(low <= high){
        int temp = arr[low];
        arr[low] = arr[high];
        arr[high] = temp;
        low = low + 1;
        high = high -1; 
    } */
    // reverse by group 
    printf("\n  After Arrays ELemnets : ");
    helper(arr,k,0,k,3);
    helper(arr,n,k+1,n-1,3);
    printArray(arr,n);
/*     helper2(arr,k,0,k);
    helper2(arr,n,k+1,n-1); */
   /*  int low = 0;
    int high = n-1;
    while(low <= high){
         arr[low] = arr[low] ^ arr[high]; 
         arr[high] = arr[low] ^ arr[high]; 
         arr[low] = arr[low] ^ arr[high]; 
    }
    printf("\n  After Arrays ELemnets : ");
    printArray(arr,n); */

    // 3.using recursion 
/*     printf("\n  After Arrays ELemnets : ");
    reverseArr(arr,n,idx); */

}