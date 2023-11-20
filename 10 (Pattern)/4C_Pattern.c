/*Inverted Right Half Pyramid Pattern in C
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
        for (int j = 1; j <= i; j++)
        {
            printf("%c\t", ch);
            ch++;
        }
        ch = 'A';
        printf("\n");
    }
}