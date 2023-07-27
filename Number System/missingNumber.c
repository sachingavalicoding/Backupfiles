#include <stdio.h>
int missingNumber(int size, int arr[])
{
    int key = 0;
    for (int i = 0; i <= size; i++)
    {
        if (key != arr[i])
        {
            key = key + 1;
        }
    }
    return key;
}
void main()
{
    int size = 9;
    int arr[] = {1, 3, 4, 7, 9, 2, 9, 6, 8, 0};
    int ans = missingNumber(size, arr);
    printf(" \n Ans = %d ", ans);
}