#include <stdio.h>

typedef struct
{
    char name[30];
    int roll;
    char section;
    char dept[50];
} Student;


int main()
{
    FILE *file = fopen("lab10ex3F.txt", "r");
    FILE *outfile = fopen("lab10ex3Fout.txt", "w");
    if (file == NULL || outfile == NULL)
    {
        printf("File not found\n");
        return 1;
    }
    Student Students[10];
    int i = 0;
    while(fscanf(file,"%s %d %c %s",Students[i].name,&Students[i].roll,&Students[i].section,Students[i].dept)!=EOF){
        fprintf(outfile, "Name : %s\nRoll : %d\nSection : %c\nDept : %s\n\n", Students[i].name, Students[i].roll, Students[i].section, Students[i].dept);
        i++;
    }
    printf("Data saved to lab10ex3Fout.txt\n");
    fclose(file);
    fclose(outfile);
    return 0;
}