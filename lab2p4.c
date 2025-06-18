#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    srand(time(NULL));
    int n = rand()%10+1;
    printf("Random number = %d", n);

    return 0;
}
