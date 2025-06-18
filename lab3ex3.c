#include <stdio.h>

int main()
{
    int a, b, c,m;

    printf("Enter three numbers : ");
    scanf("%d %d %d", &a, &b, &c);

    m= (a > b && a < c) || (a < b && a > c) ? a : (b > a && b < c) || (b < a && b > c) ? b: c;
    printf("The medium is %d", m);

    return 0;
}
