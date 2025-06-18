#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main(){
    int sides[6]={0,0,0,0,0,0};
    int t,n;
    srand(time(NULL));
    printf("How many times you want to roll the dice : ");
    scanf("%d", &t);
    printf("Randomly chosen numbers :\n");

    for (int i = 0; i < t; i++)
    {
        n = rand() % 6 + 1;
        printf("%d ",n);
        sides[n - 1]++;
    }

    printf("\n");

    for (int j = 0; j < 6; j++)
    {
        printf("Frequency of %d = %.2f%%\n",j+1, (float)sides[j]*100 / t);
    }
    return 0;
}