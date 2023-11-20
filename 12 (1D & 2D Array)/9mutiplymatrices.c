//WAP to multiply two matrices.
#include<stdio.h>
void main()
{
    int m, n; 
    printf("Enter the no. of rows & columns \n");
    scanf("%d %d", &m, &n);
    printf("Enter %d values in 1st array \n", (m * n));
    int a[m][n], b[m][n], c[m][n];
    for(int i = 0; i < m; i++)
    {
        for(int j = 0; j < n; j++)
            scanf("%d", &a[i][j]);
    }
    printf("Enter %d values in 2nd array \n", (m * n));
    for(int i = 0; i < m; i++)
    {
        for(int j = 0; j < n; j++)
            scanf("%d", &b[i][j]);
    }
    for(int i = 0; i < m; i++)
    {
        for(int j = 0; j < n; j++)
        {
            c[i][j] = 0;
            for(int k = 0; k < n; k++)
                c[i][j] = c[i][j] + (a[i][k] * b[k][j]);
        }
    }
    printf("Multiplication of two matrices \n");
    for(int i = 0; i < m; i++)
    {
        for(int j = 0; j < n; j++)
            printf("%d \t", c[i][j]);
        printf("\n");
    }
}