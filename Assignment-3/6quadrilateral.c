//The angles of a quadrilateral are in the ratio 3:4:5:6. WAP to find and display all of its angles.
#include<stdio.h>
void main()
{
    float a = 360 / (3 + 4 + 5 + 6);
    printf("The angles of quadrilateral are %.2f, %.2f, %.2f & %.2f respectively\n", (3 * a), (4 * a), (5 * a), (6 * a));
}