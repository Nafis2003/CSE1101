#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *arr1, *arr2,*l1,*l2;
    l1=(int *)malloc(sizeof(int));
    l2=(int *)malloc(sizeof(int));

    printf("Enter length of both arrays : ");
    scanf("%d %d", l1, l2);

    arr1 = (int *)malloc(*l1*sizeof(int));
    arr2 = (int *)malloc(*l1*sizeof(int));

    printf("Enter array 1: ");
    for (int i = 0; i < *l1; i++)
    {
        scanf("%d", arr1 + i);
    }

    printf("Enter array 2: ");
    for (int i = 0; i < *l2; i++)
    {
        scanf("%d", arr2 + i);
    }

    arr1 = (int *)realloc(arr1, (*l1 + *l2) * sizeof(int));
    for (int i = *l1; i < (*l1 + *l2); i++)
    {
        *(arr1 + i) = *(arr2 + i - *l1);
    }

    printf("After joining arr2 to arr1 :");
    for (int i = 0; i < (*l1+*l2); i++)
    {
        printf("%d ", *(arr1 + i));
    }

    free(arr1);
    free(arr2);
    free(l1);
    free(l2);
    return 0;
}