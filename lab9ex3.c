#include <stdio.h>
#include <string.h>

typedef struct
{
    char name[20];
    char address[100];
    float grade;
    float charge;
} Hotel;

int main()
{
    int n;
    float p, g;

    printf("How many hotels: ");
    scanf("%d", &n);

    Hotel Hotels[n];
    for (int i = 0; i < n; i++)
    {
        printf("Hotel %d:\n", i + 1);
        printf("\tName: ");
        scanf("%s", Hotels[i].name);
        printf("\tAddress: ");
        scanf(" %s", Hotels[i].address); // Allow spaces in the address
        printf("\tGrade: ");
        scanf("%f", &Hotels[i].grade);
        printf("\tCharge: ");
        scanf("%f", &Hotels[i].charge);
    }

    printf("Enter grade to filter by: ");
    scanf("%f", &g);

    printf("Enter charge limit to filter by: ");
    scanf("%f", &p);

    printf("\nHotels with grade %.2f:\n",g);
    printf("%-15s %-20s %-7s %-7s\n", "Name", "Address", "Grade", "Charge");
    printf("---------------------------------------------------\n");
    for (int i = 0; i < n; i++)
    {
        Hotel h = Hotels[i];
        if (h.grade == g)
        {
            printf("%-15s %-20s %-7.2f %-7.2f\n", h.name, h.address, h.grade, h.charge);
        }
    }

    printf("\nHotels charging less than %.2f:\n",p);
    printf("%-15s %-20s %-7s %-7s\n", "Name", "Address", "Grade", "Charge");
    printf("---------------------------------------------------\n");
    for (int i = 0; i < n; i++)
    {
        Hotel h = Hotels[i];
        if (h.charge < p)
        {
            printf("%-15s %-20s %-7.2f %-7.2f\n", h.name, h.address, h.grade, h.charge);
        }
    }

    return 0;
}
