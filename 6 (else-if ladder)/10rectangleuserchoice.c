/*WAP to accept the length and breadth of a rectangle. Calculate and display the area, perimeter or diagonal of the rectangle as per the user’s choice.*/
#include<stdio.h>
#include<math.h>
void main()
{
    float l, b, a, p, d;
    int u;
    printf("Enter the length & breadth of a rectangle \n");
    scanf("%f %f", &l, &b);
    printf("Enter 1 to print the area \nEnter 2 to print the perimeter \nEnter 3 to print the diagonal \n");
    scanf("%d", &u);
    if(u == 1)
    {
        a = l * b;
        printf("Area of the rectangle = %.2f \n", a);
    }   
    else if(u == 2)
    {
        p = 2 * (l + b);
        printf("Perimeter of the rectangle = %.2f \n", p);
    }
    else if(u == 3)
    {
        d = sqrt((l * l) + (b * b));
        printf("Diagonal of the rectangle = %.2f \n", d);
    }
    else
        printf("Invalid input");
}