//WAP to find sum of main diagonal elements of a matrix.
#include<stdio.h>
void main()
{
    int m, n, s = 0; 
    printf("Enter the no. of rows & columns \n");
    scanf("%d %d", &m, &n);
    printf("Enter %d values  \n", (m * n));
    int a[m][n], b[m][n];
    for(int i = 0; i < m; i++)
    {
        for(int j = 0; j < n; j++)
            scanf("%d", &a[i][j]);
    }
    for(int i = 0; i < m; i++)
    {
        for(int j = 0; j < n; j++)
        {
            if(i == j)    
                s = s + a[i][j];
        }
    }
    printf("Sum of diagonal = %d", s);
}