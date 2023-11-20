/*Right Half Pyramid Pattern in C
A
A   B
A   B   C
A   B   C   D
A   B   C   D   E
*/
#include<stdio.h>
void main()
{
    int i, j, n;
    char ch;
    printf("Enter the no. of rows \n");
    scanf("%d", &n);
    for(i = 1; i <= n; i++)
    {
        ch = 'A';                   //ch = 65;
        for(j = 1; j <= i; j++)
        {
            printf("%c\t", ch);
            ch++;
        }
        printf("\n");
    }
}