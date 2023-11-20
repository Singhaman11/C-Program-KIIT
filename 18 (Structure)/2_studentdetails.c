/*
Store 10 students data:
    Name
    Roll_no
    Math_marks
    Science_marks
    Average
    Result
If Average >= 50 then store 'P' (Pass) in Result & if Average < 50 then store 'F' (Fail) in Result. 
*/
#include<stdio.h>
struct student_data
{
    char Name[40];
    int Roll_no;
    int Math_marks;
    int Science_marks;
    float Average;
    char Result;
};
int main()
{
    struct student_data Detail[10];
    for (int i = 0; i < 10; i++)
    {
        printf("Enter the name of the student%d\n", (i + 1));
        scanf("%s", Detail[i].Name);
        printf("Enter the roll no. of the student%d\n", (i + 1));
        scanf("%d", &Detail[i].Roll_no);
        printf("Enter the math marks of the student%d\n", (i + 1));
        scanf("%d", &Detail[i].Math_marks);
        printf("Enter the science marks of the student%d\n", (i + 1));
        scanf("%d", &Detail[i].Science_marks);
        Detail[i].Average = (Detail[i].Math_marks + Detail[i].Science_marks) / 2.0;
        Detail[i].Result = Detail[i].Average >= 50 ? 'P' : 'F';
    }
    for (int i = 0; i < 10; i++)
    {
        printf("Name of Student%d : %s\n", (i + 1), Detail[i].Name);
        printf("Roll no : %d\n", Detail[i].Roll_no);
        printf("Math marks = %d\n", Detail[i].Math_marks);
        printf("Science marks = %d\n", Detail[i].Science_marks);
        printf("Average = %.2f\n", Detail[i].Average);
        printf("Result : %c\n\n", Detail[i].Result);
    }
    return 0;
}