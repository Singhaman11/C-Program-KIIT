#include<stdio.h>
struct car 
{
    char brand[50];
    char model[50];
    int price;
};
void main()
{
    struct car c[4];
    for(int i = 0; i < 4; i++)
    {
        printf("Enter details of car%d\n", (i + 1));
        scanf("%s %s %d", &c[i].brand, &c[i].model, &c[i].price);
    }
    for(int j = 0; j < 4; j++)
    {
        printf("Details of car%d \n", (j + 1));
        printf("%s \n%s \n%d \n", c[j].brand, c[j].model, c[j].price);
    }
}