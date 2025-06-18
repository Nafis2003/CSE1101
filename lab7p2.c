#include <stdio.h>
#include <stdlib.h>
int main()
{
    int *arr,*n, *sum;
    n = (int *)malloc(sizeof(int));
    sum = (int *)malloc(sizeof(int));
    *sum = 0;
    printf("Length of the array : ");
    scanf("%d", n);
    arr = (int *)malloc(*n * sizeof(int));
    printf("Enter the array : ");
    for (int i = 0; i < *n;i++){
        scanf("%d", arr + i);
    }
    for (int i = 0; i < *n; i++)
    {
        *sum += *(arr + i);
    }
    printf("Sum = %d", *sum);

    return 0;
}