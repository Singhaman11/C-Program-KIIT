//WAP to convert lowercase string to uppercase. 
#include<stdio.h>
#include<string.h>
void main()
{
    char st[50];
    printf("Enter a string \n");
    gets(st);
    printf("String converted from Lowercase to Uppercase: %s", strupr(st));     
}