/*The State Electricity Board calculates the electricity bill for their consumers according to the units consumed (per month) as per the given tariff.
    Units Consumed                                     Charges
Up to 100 units                                     Rs. 1.80/unit
More than 100 units and up to 300 units             Rs. 2.30/unit
More than 300 units and up to 500 units             Rs. 2.80/unit
More than 500 units                                 Rs. 3.50/unit
WAP to input consumer number and units consumed. Calculate and display the electricity bill and consumer number.*/
#include<stdio.h>
void main()
{
    int u, n;
    double c;
    printf("Enter the consumer no. & no. of units consumed \n");
    scanf("%d %d", &n, &u);
    if(u <= 100)
        c = u * 1.80;
    else if(u > 100 && u <= 300)
        c = (100 * 1.80) + ((u - 100) * 2.30);
    else if(u > 300 && u <= 500)
        c = (100 * 1.80) + (200 * 2.30) + ((u - 300) * 2.80);
    else
        c = (100 * 1.80) + (200 * 2.30) + (200 * 2.80) + ((u - 500) * 3.50);
    printf("Consumer No. %d \n", n);
    printf("Electricity bill = Rs. %.2f", c);
}