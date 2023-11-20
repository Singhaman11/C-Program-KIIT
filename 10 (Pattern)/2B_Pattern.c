/*Left Half Pyramid Pattern in C
                1
            1   2
        1   2   3
    1   2   3   4
1   2   3   4   5
*/
#include<stdio.h>
void main()
{
    int n;
    printf("Enter the no. of rows \n");
    scanf("%d", &n);
    for(int i = 1; i <= n; i++)
    {
        for(int j = n; j > i; j--)
            printf(" \t");
        for(int k = 1; k <= i; k++)
            printf("%d\t", k);
        printf("\n");
    }
}