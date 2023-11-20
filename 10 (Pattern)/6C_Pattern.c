/*Inverted Full Pyramid Pattern in C
A   B   C   D   E   F   H   G   I
    A   B   C   D   E   F   H
        A   B   C   D   E
            A   B   C
                A
*/
#include<stdio.h>
void main()
{
    int n;
    printf("Enter the no. of rows \n");
    scanf("%d", &n);
    char ch = 'A';
    for(int i = n; i >= 1; i--)
    {
        for(int j = n; j > i; j--)
            printf(" \t");
        for(int k = 1; k <= ((2 * i) - 1); k++)
        {
            printf("%c\t", ch);
            ch++;    
        }
        ch = 'A';
        printf("\n");
    }
}