#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *fibo, *n;
    n = (int *)malloc(sizeof(int));
    printf("Enter n :");
    scanf("%d", n);
    fibo = (int *)malloc(*n*sizeof(int));
    printf("Fibonacci numbers : \n");
    for (int i = 0; i <*n;i++){
        if(i<=1){
            *(fibo + i) = i;
        }
        else{
            *(fibo + i) = *(fibo + i - 1) + *(fibo + i - 2);
        }
        printf("%d ", *(fibo + i));
    }
    free(fibo);
    free(n);
    return 0;
}