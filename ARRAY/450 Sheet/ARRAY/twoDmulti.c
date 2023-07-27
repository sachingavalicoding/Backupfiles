#include<stdio.h>
void main(){
    

    int multi[100][100];
    int num;
    int b[100][100];
    int n;
    int a[100][100];

    printf(" ENTER Size  Of Array :   \n");
    scanf("%d", &n);
    printf(" \n ENTER  1St YOUR MATRIX ");
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%d",&a[i][j]);
            
        }
        printf("\n");
    }
    printf(" \n ENTER  2nd YOUR MATRIX ");
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &b[i][j]);
            
        }
        printf("\n");
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf(" %d",a[i][j]);
            
        }
        printf("\n");
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf(" %d",b[i][j]);
            
        }
        printf("\n");
    }

    for(int i = 0; i < n;i++){
        for(int j = 0; j < n; j++){
            multi[i][j] = 0;
            for(int k = 0; k < n; k++){
               multi[i][j] +=a[i][k] * b[k][j];
            }

           /*  multi[i][j] = a[i][j] * b[i][j]; */
        }
    }
    for(int i = 0; i < n;i++){
        for(int j = 0; j < n; j++){
            
            printf(" %d ",multi[i][j]);
        }
        printf("\n");
    }
}