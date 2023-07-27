#include<stdio.h>
void main(){
    

    int add[100][100];
    int num;
    int b[100][100];
    int n;
    int a[100][100];

    printf(" ENTER THE NUMBER  \n");
    scanf("%d", &n);
    printf(" ENTER YOUR MATRIX ");
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%d",&a[i][j]);
            
        }
        printf("\n");
    }
    printf(" ENTER YOUR MATRIX ");
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
            add[i][j] = 0;
            for(int k = 0; k < n; k++){
               add[i][j] +=a[i][k] * b[k][j];
            }

           /*  add[i][j] = a[i][j] * b[i][j]; */
        }
    }
    for(int i = 0; i < n;i++){
        for(int j = 0; j < n; j++){
            printf(" %d ",add[i][j]);
        }
        printf("\n");
    }
}