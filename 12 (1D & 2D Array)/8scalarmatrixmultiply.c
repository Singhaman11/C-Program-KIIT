//WAP to perform scalar matrix multiplication. (The term scalar multiplication refers to the product of a real number and a matrix. In scalar multiplication, each entry in the matrix is multiplied by the given scalar.)
#include<stdio.h>
void main()
{
    int m, n, Num;
    printf("Enter the no. of rows & columns \n");
    scanf("%d %d", &m, &n);
    int a[m][n];
    printf("Enter %d values \n", (m * n));
    for(int i = 0; i < m; i++)
    {
        for(int j = 0; j < n; j++)
            scanf("%d", &a[i][j]);
    }
    printf("Enter real no. \n");
    scanf("%d", &Num);
    printf("Scalar matrix mutiplication \n");
    for(int i = 0; i < m; i++)
    {
        for(int j = 0; j < n; j++)
            printf("%d \t", (a[i][j] * Num));
        printf("\n");
    }
}