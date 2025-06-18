#include <stdio.h>
#include <string.h>
struct Student
{
    char name[30];
    int roll;
    float mark;
};


int main(){
    int n;
    printf("Total number of students : ");
    scanf("%d", &n);
    struct Student Students[n];
    for (int i = 0; i < n; i++)
    {
        printf("Student %d :\n",i+1);
        printf("\tName : ");
        scanf("%s", Students[i].name);
        printf("\tRoll : ");
        scanf("%d", &Students[i].roll);
        printf("\tMark : ");
        scanf("%f", &Students[i].mark);
    }
    printf("All student info : ");
    for (int i = 0; i < n; i++)
    {
        printf("\nStudent %d :\n", i + 1);
        printf("\tName : %s",Students[i].name);
        printf("\tRoll : %d",Students[i].roll);
        printf("\tMark : %.2f",Students[i].mark);
    }
    return 0;
}