/*WAP to input the basic salary of an employee. Calculate and display the gross salary and net salary when:
DA = 30% of basic
HRA = 12.5% of basic
PF = 10% of basic
gross = basic + DA + HRA
net_pay = gross - PF */
#include<stdio.h>
void main()
{
    float basic, DA, HRA, PF, gross, net;
    printf("Enter the basic salary of an employee \n");
    scanf("%f", &basic);
    DA = (basic * 30) / 100;
    HRA = (basic * 12.5) / 100;
    PF = (basic * 10) / 100;
    gross = basic + DA + HRA;
    net = gross - PF;
    printf("Gross salary = Rs.%f \n", gross);
    printf("Net salary = Rs.%f", net);
}