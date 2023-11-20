//Find the length of a string without using strlen() function.
#include<stdio.h>
void main()
{
    char st[50];
    int l = 0;
    printf("Enter a string \n");
    gets(st);
    while(st[l] != '\0')
        l++;
    printf("Length of string = %d ", l);
}