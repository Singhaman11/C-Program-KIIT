//A dealer allows his customer two successive discounts of 20% and 10%. If the article costs Rs. 7200, calculate and display the selling price and the total discount given by the dealer.
#include<stdio.h>
void main()
{
    float c = 7200;
    float SP, d;
    d = (c * 20) / 100;
    d = d + ((c * 10) / 100);
    SP = c - d;
    printf("The Selling price = %f \n", SP);
    printf("The discount provided = %f", d);
}