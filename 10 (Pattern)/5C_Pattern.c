/*Inverted Left Half Pyramid Pattern in C
A   B   C   D   E
    A   B   C   D
        A   B   C
            A   B
                A
*/
#include<stdio.h>
void main()
{
    int n;
    char ch = 'A';
    printf("Enter the no. of rows \n");
    scanf("%d", &n);
    for(int i = n; i >= 1; i--)
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