/*WAP that displays the results of the following evaluations based on the choice entered by the user.
a) Square of the number
b) Cube of the number
c) Square root of the number
d) Cube root of the number      */
#include<stdio.h>
#include<math.h>
void main()
{
    float n, s, c, sr, cr;
    int u;
    printf("Enter a no. \n");
    scanf("%f", &n);
    printf("Enter 1 to print the square of the no. \nEnter 2 to print the cube of the no. \nEnter 3 to print the square root of the no. \nEnter 4 to print the cube root of the no. \n");
    scanf("%d", &u);
    if(u == 1)
    {
        s = n * n;
        printf("Square of the no. = %.2f \n", s);
    }   
    else if(u == 2)
    {
        c = n * n * n;
        printf("Cube of the no. = %.2f \n", c);
    }
    else if(u == 3)
    {
        sr = sqrt(n);
        printf("Square root of the no. = %.2f \n", sr);
    }
    else if(u == 4)
    {
        cr = cbrt(n);
        printf("Cube root of the no. = %.2f \n", cr);
    }
    else
        printf("Invalid input");
}