//WAP to write all the odd nos. from 1 to n in a file.
#include<stdio.h>
void main()
{
    FILE *fptr;
    int n = 0;
    fptr = fopen("3.txt", "w");
    printf("Enter the value of n\n");
    scanf("%d", &n);
    for(int i = 1; i <= n; i++)
    {
        if((i % 2) != 0)
            fprintf(fptr, "%d\t", i);
    }
    fclose(fptr);
}