//WAP to enter two unequal numbers. If the first number is greater then display square of the smaller number and cube of the greater number otherwise, vice-versa. If the numbers are equal, display the message ‘Both the numbers are equal’.
#include<stdio.h>
void main()
{
    int n1, n2;
    printf("Enter two unequal nos. \n");
    scanf("%d %d", &n1, &n2);
    if(n1 > n2)
    {
        printf("Square of smaller no. is %d \n", (n2 * n2));
        printf("Cube of greater no. is %d", (n1 * n1 * n1));
    }
    else if(n2 > n1)
    {
        printf("Cube of smaller no. is %d \n", (n2 * n2 * n2));
        printf("Square of greater no. is %d", (n1 * n1));
    }
    else
        printf("Both the numbers are equal"); 
}