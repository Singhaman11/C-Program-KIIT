//WAP to find and display two real roots of a quadratic equation (if real roots are not present, then display a suitable message).
#include<stdio.h>
#include<math.h>
void main()
{
    int a, b, c;
    float d, r1, r2;
    printf("Enter a, b, c \n");
    scanf("%d %d %d", &a, &b, &c);
    d = (b * b) - (4 * a * c);               //Discriminant of the equation
    if(d > 0)
    {
        r1 = (-b + sqrt(d)) / (2 * a);       //1st root of the equation
        r2 = (-b - sqrt(d)) / (2 * a);       //2nd root of the equation
        printf("The roots of the equation are %f & %f", r1, r2);
    }
    else
        printf("No real roots");
}