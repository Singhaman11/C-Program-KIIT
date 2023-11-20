//WAP to enter three numbers and a character. Find and display sum of the numbers if the given character is ‘s’ and product of the numbers if the given character is ‘p’. The program displays a message “Invalid Character” if the user enters a letter other than ‘s’ or ‘p’.
#include<stdio.h>
void main()
{
    int n1, n2, n3;
    char ch;
    printf("Enter the three nos. & a character \n");
    scanf("%d %d %d %c", &n1, &n2, &n3, &ch);
    if(ch == 's')
        printf("The sum of three nos. = %d", (n1 + n2 + n3));
    else if(ch == 'p')
        printf("The product of three nos. = %d", (n1 * n2 * n3));
    else
        printf("Invalid Character");
}