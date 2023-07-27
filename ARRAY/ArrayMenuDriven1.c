#include <stdio.h>
int arr[20];
int n;
void printArray()
{

    printf("\n Array Elemets Are : ");
    for (int i = 0; i < n; i++)
    {
        printf("  %d ", arr[i]);
    }
}

int sumOfArrEle()
{
    int sum = 0;
    int n;
    printf("\n How many elemnets You want in Arraay : ");
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        printf("\n Enter Array Elements : ");
        scanf("%d", &arr[i]);
    }
    printArray();
    for (int i = 0; i < n; i++)
    {
        sum = sum + i;
    }
    return sum;
}
void main()
{
    printf(" \n Array Op Menu Driven Program ");
    int op;
    while (1)
    {
        printf("\n 1.Print ARRAY  \n 2. SUM OF Array  \n 3. Maximum Number  \n 4. Reverse Array");
        printf("\n Which Op You can Parform : ");
        scanf("%d", &op);
        switch (op)
        {
        case 1:
        {
            int n;
            printf("\n How many elemnets You want in Arraay : ");
            scanf("%d", &n);
            printArray();
        }
        case 2:
        {

            int ans = sumOfArrEle();
            printf(" \n Sum of Array Elements are :  %d ", ans);
        }
        }
    }
}