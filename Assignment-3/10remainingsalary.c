/*An employee contributes 12% of salary to the Provident fund. Of the remaining salary, he spends 10% on house rent and 20% on education of the children. WAP to input salary and calculate:
i)	The amount deducted as provident fund
ii)	The amount spent on rent and education*/
#include<stdio.h>
void main()
{
    float s;
    printf("Enter the salary of an employee \n");
    scanf("%f", &s);
    printf("Amount deducted as Provident fund = Rs.%f \n", ((s * 12) / 100));
    s = s - ((s * 12) / 100);
    printf("Amount spent on House rent = Rs.%f \n", ((s * 10) / 100));
    s = s - ((s * 10) / 100);
    printf("Amount spent on Children education = Rs.%f \n", ((s * 20) / 100));
}