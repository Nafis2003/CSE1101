#include <stdio.h>
#include <string.h>

typedef struct
{
    char name[30];
    char tel[20];
} Person;

char* Search(Person Persons[],int n,char q[]){
    int i = 0;
    for (; i < n;i++){
        if (strcmp(q, Persons[i].name) == 0){
            return Persons[i].tel;
        } 
        else if (strcmp(q, Persons[i].tel)==0)
        {
            return Persons[i].name;
        }
    }
    return "Not found!";
}

int main(){
    int n;
    char q[30];
    printf("How many person : ");
    scanf("%d", &n);
    Person Persons[n];
    for (int i = 0; i < n;i++){
        printf("Person %d\n", i + 1);
        printf("\tName : ",Persons[i]);
        scanf("%s", Persons[i].name);
        printf("Telephone no. : ",Persons[i]);
        scanf("%s", Persons[i].tel);
    }
    printf("Search Query : ");
    scanf("%s", q);
    char *result = Search(Persons, n, q);
    printf("Result : %s", result);
    return 0;
}
