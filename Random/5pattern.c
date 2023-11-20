/*
WAP to print the following pattern:
1                                   1
1   2                           2   1
1   2   3                   3   2   1   
1   2   3   4           4   3   2   1
1   2   3   4   5   5   4   3   2   1
*/



/*#include<stdio.h>
void main()
{
    int i, j, k, l, n;
    printf("Enter the no. of rows \n");
    scanf("%d", &n);
    for(i = 1; i <= n; i++)
    {
        //
        for(j = 1; j <= (n - i); j++)
            printf("\t");
        for(k = 1; k <= i; k++)
            printf("%d\t", k);
        for(l = (i - 1); l > 0; l--)
            printf("%d\t", l);   
        printf("\n");
    }
}*/