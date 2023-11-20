//WAP to find reverse of a string.
#include<stdio.h>
#include<string.h>
void main()
{
    char st[50];
    printf("Enter a string \n");
    gets(st);
    printf("Reversed string: %s", strrev(st));     
}