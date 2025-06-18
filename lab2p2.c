#include <stdio.h>

int main()
{
    int c, d;
    printf("Enter two integers : ");
    scanf("%d %d", &c, &d);
    printf("%d&%d=%d\n", c, d, c & d);
    return 0;
}
