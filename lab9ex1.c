#include <stdio.h>

typedef struct Student
{
    char name[30];
    int roll;
    float mark;
} Student;


void Sort(Student Students[],int n){
    int b;
    Student t;
    for (int j = 0; j < n - 1; j++)
    {
        b = 0;
        for (int k = 0; k < n - j - 1; k++)
        {
            if (Students[k].mark < Students[k + 1].mark)
            {
                t = Students[k];
                Students[k] = Students[k + 1];
                Students[k + 1] = t;
                b = 1;
            }
        }
        if (b == 0)
        {
            break;
        }
        }
}

int main()
{
    int n;
    printf("Total number of students : ");
    scanf("%d", &n);
    Student Students[n];
    for (int i = 0; i < n; i++)
    {
        printf("Student %d :\n", i + 1);
        printf("\tName : ");
        scanf("%s", Students[i].name);
        printf("\tRoll : ");
        scanf("%d", &Students[i].roll);
        printf("\tMark : ");
        scanf("%f", &Students[i].mark);
    }
    Sort(Students,n);
    printf("\nName      Roll     Mark");
    printf("\n----      ----     ----");
    for (int i = 0; i < n; i++)
    {

        printf("\n%-10s%4d     %.2f", Students[i].name, Students[i].roll, Students[i].mark);
    }
    return 0;
}