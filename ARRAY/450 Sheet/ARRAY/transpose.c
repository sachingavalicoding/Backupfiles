#include <stdio.h>
void main()
{
    int arr[10][10];
    int arr2[10][10];
    int c[10][10];
    int n;
    int sum = 0;
    printf("\n Enter Size of Array ");
    scanf("%d", &n);
    printf("\n Enter Arrays ELements 1st Array: ");
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {

            scanf("%d", &arr[i][j]);
        }
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {

            printf(" %d", arr[i][j]);
        }
        printf("\n");
    }
      printf("\n Enter Arrays ELements 2nd Array: ");
      for (int i = 0; i < n; i++)
      {
          for (int j = 0; j < n; j++)
          {

              scanf("%d", &arr2[i][j]);
          }
      }
      for (int i = 0; i < n; i++)
      {
          for (int j = 0; j < n; j++)
          {

              printf(" %d", arr2[i][j]);
          }
          printf("\n");
      }
      for (int i = 0; i < n; i++)
      {
          for (int j = 0; j < n; j++)
          {
              c[i][j] = 0;
              for (int k = 0; k < n; k++)
              {
                  c[i][j] += arr[i][k] * arr2[k][j];

              }
          }
          printf("\n");
      }
      for (int i = 0; i < n; i++)
      {
          for (int j = 0; j < n; j++)
          {
              printf(" %d", c[i][j]);
          }
          printf("\n");
      }
  
    // get one more

    // lower  triangular matrix
 /*    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {

            if (i == 0 && j >= 1 || i >= 1 && j <= n - 1)
            {
                if (arr[i][j] == 0)
                {

                    ans = 1;
                }
            }
            else
            {
                ans = 0;
            }
        }
    }
    if (ans == 1)
    {
        printf("Yes");
    }
    else{

    printf("No");
    } */
    // Upper  triangular matrix
/*     int ans2 = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {

            if (j == 0 && i >= 1 || i <= n-1 && j <= n - 1)
            {
                if (arr[i][j] == 0)
                {

                    ans2 = 1;
                }
            }
            else
            {
                ans2 = 0;
            }
        }
    }
    if (ans2 == 1)
    {
        printf("Yes");
    }
    else{

    printf("No");
    }
 */
}

