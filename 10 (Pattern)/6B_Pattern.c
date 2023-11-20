/*Inverted Full Pyramid Pattern in C
1   2   3   4   5   6   7   8   9
    1   2   3   4   5   6   7
        1   2   3   4   5
            1   2   3
                1
*/
#include<stdio.h>
void main()
{
    int n;
    printf("Enter the no. of rows \n");
    scanf("%d", &n);
    for(int i = n; i >= 1; i--)
    {
        for(int j = n; j > i; j--)
            printf(" \t");
        for(int k = 1; k <= ((2 * i) - 1); k++)
            printf("%d\t", k);
        printf("\n");
    }
}