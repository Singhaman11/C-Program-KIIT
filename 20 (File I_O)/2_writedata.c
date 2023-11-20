//WAP to input student information from a user & enter it to a file.
#include<stdio.h>
void main()
{
    FILE *fptr;
    char name[50];
    int age = 0;
    float cgpa = 0;
    fptr = fopen("2.txt", "w");
    printf("Enter name, age and CGPA\n");
    scanf("%s %d %f", &name, &age, &cgpa);
    fprintf(fptr, "%s\t", name);
    fprintf(fptr, "%d\t", age);
    fprintf(fptr, "%.2f", cgpa);
    fclose(fptr);
}