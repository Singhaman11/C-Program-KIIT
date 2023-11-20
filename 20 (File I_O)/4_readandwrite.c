// WAP to replace 2 nos. already written in a file with their sum.
#include<stdio.h>
void main()
{
    FILE *fptr;
    int a, b;
    fptr = fopen("4.txt", "r");
    fscanf(fptr, "%d", &a);
    fscanf(fptr, "%d", &b);
    fclose(fptr);
    fptr = fopen("4.txt", "w");
    fprintf(fptr, "%d", a+b);
    fclose(fptr);
}