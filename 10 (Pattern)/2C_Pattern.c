/*Left Half Pyramid Pattern in C
                A
            A   B
        A   B   C
    A   B   C   D
A   B   C   D   E
*/
#include<stdio.h>
void main()
{
    int n;
    char ch = 'A';
    printf("Enter the no. of rows \n");
    scanf("%d", &n);
    for(int i = 1; i <= n; i++)
    {
        for(int j = n; j > i; j--)
            printf(" \t");
        for(int k = 1; k <= i; k++)
        {
            printf("%c\t", ch);
            ch++;
        }
        ch = 'A';
        printf("\n");
    }
}