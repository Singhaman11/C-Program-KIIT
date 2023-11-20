//WAP to display the message “KIIT Silver Jubilee” if the entered year is 25 otherwise display “Wrong input”.
#include<stdio.h>
void main()
{
    int y, o;
    printf("Enter the no. of years \n");
    scanf("%d", &y);
    o = (y == 25) ? printf("KIIT Silver Jubilee") : printf("Wrong input");
}