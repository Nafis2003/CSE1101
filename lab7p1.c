#include <stdio.h>
#include <stdlib.h>
int main(){
    int *a, *b;
    a = (int *)malloc(sizeof(int));
    b = (int *)malloc(sizeof(int));
    printf("Enter a and b : ");
    scanf("%d %d", a, b);
    printf("Max(a,b) = %d", *a > *b ? *a : *b);
    return 0;
}