#include <stdio.h>

int main()
{
    int n;
    printf("Enter a number (1-10): ");
    scanf("%d", &n);

    switch (n)
    {
    case 1:
        printf("Equivalent roman numeral: I\n");
        break;
    case 2:
        printf("Equivalent roman numeral: II\n");
        break;
    case 3:
        printf("Equivalent roman numeral: III\n");
        break;
    case 4:
        printf("Equivalent roman numeral: IV\n");
        break;
    case 5:
        printf("Equivalent roman numeral: V\n");
        break;
    case 6:
        printf("Equivalent roman numeral: VI\n");
        break;
    case 7:
        printf("Equivalent roman numeral: VII\n");
        break;
    case 8:
        printf("Equivalent roman numeral: VIII\n");
        break;
    case 9:
        printf("Equivalent roman numeral: IX\n");
        break;
    case 10:
        printf("Equivalent roman numeral: X\n");
        break;
    default:
        printf("The number must lie between 1 and 10.\n");
    }
    return 0;
}
