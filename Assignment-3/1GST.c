//A shopkeeper sells an article for Rs. 10,000. If the rate of tax under GST is 10%, calculate and display the tax and the amount paid by the customer.
#include<stdio.h>
void main()
{
    float p = 10000;
    float r = 10;
    float a;
    printf("The GST on product = %f \n", ((p * r) / 100));
    a = p -  ((p * r) / 100);
    printf("The total amount of product = %f", a);
}