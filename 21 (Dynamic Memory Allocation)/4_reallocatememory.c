//WAP to allocate memory for 5 nos. Then dynamically increase it to 8 nos.
#include<stdio.h>
#include<stdlib.h>
void main()
{
    int *ptr;
    ptr = (int*) calloc(5, sizeof(int));
    printf("Enter 5 nos. \n");
    for(int i = 0; i < 5; i++)
        scanf("%d", &ptr[i]);
    ptr = realloc(ptr, 8);
    printf("Enter 8 nos. \n");
    for(int i = 0; i < 8; i++)
        scanf("%d", &ptr[i]);
    for(int i = 0; i < 8; i++)
        printf("No. %d is %d\n", i, ptr[i]);
}