//WAP to read 5 integers from a file.
#include<stdio.h>
void main()
{
    int n = 0;
    FILE *fptr;
    fptr = fopen("1.txt", "r");
    for(int i = 1; i <= 5;i++)
    {
        fscanf(fptr , "%d", &n);
        printf("%d\n", n);
    }
    fclose(fptr);
}