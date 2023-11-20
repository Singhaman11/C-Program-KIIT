/*Write a menu driven program to input two positive numbers m and n (where m>n) and perform the following tasks:
(a) Find the sum of two numbers without using '+' operator.
(b) Find the product of two numbers without using '*' operator.
(c) Find the quotient and remainder of two numbers without using '/' and '%' operator.
[Hint: The last value obtained after each subtraction is the remainder and the number of iterations results in quotient.]
Sample Input: m=5, n=2
5 - 2 = 3
3 - 2 = 1, thus Quotient = 2 and Remainder = 1
*/
#include<stdio.h>
void main()
{
    int n1, n2, ch, s = 0, p = 0, q = 0, c = 0;
    printf("Enter two nos. \n");
    scanf("%d %d", &n1, &n2);
    printf("Enter 1 to find the Sum \nEnter 2 to find the Product \nEnter 3 to find the Quotient & Remainder \n");
    scanf("%d", &ch);
    if(ch == 1)
    {
        s = n1 - (-n2);
        printf("Sum of the two nos. = %d \n", s);
    }
    else if(ch == 2)
    {
        for(int i = 1; i <= n2; i++)
            p = p + n1;
        printf("Product of the two nos. = %d \n", p);
    }
    else if(ch == 3)
    {
        for(int i = 1; i <= n2; i++)
        { 
            if(n1 >= n2)
            {
                n1 = n1 - n2;
                q++;
            }
        }
        printf("Quotient of the two nos. = %d \n", q);
        printf("Remainder of the two nos. = %d \n", n1);
    }
    else
    {
        printf("INVALID CHOICE \n");
    }
}