#include <stdio.h>

int main()
{
    FILE *file = fopen("lab10.txt", "r");
    FILE *odd = fopen("lab10odd.txt","w");
    FILE *even = fopen("lab10even.txt","w");
    int n;
    while (fscanf(file,"%d",&n)!=EOF)
    {
        n % 2 == 0 ? fprintf(even, "%d ", n) : fprintf(odd, "%d ", n);
    }
    printf("Odd numbers are saved in lab10odd.txt and even numbers in lab10even.txt");

    return 0;
}