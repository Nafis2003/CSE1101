#include <stdio.h>
#include <stdlib.h>


int main()
{
    int *m,*n,*A, *B, *C;
    m = (int *)malloc(sizeof(int));    
    n = (int *)malloc(sizeof(int));    


    printf("Dimension of the matrices: ");
    scanf("%d %d", m, n);

    A = (int *)malloc(*m * *n * sizeof(int));
    B = (int *)malloc(*m * *n * sizeof(int));
    C = (int *)malloc(*m * *n * sizeof(int));
    // Input Matrix A
    printf("Input Matrix A:\n");
    for (int i = 0; i < *m; i++)
    {
        for (int j = 0; j < *n; j++)
        {
            scanf("%d", A + i**n + j);
        }
    }

    // Input Matrix B
    printf("Input Matrix B:\n");
    for (int i = 0; i < *m; i++)
    {
        for (int j = 0; j < *n; j++)
        {
            scanf("%d", B + i * *n + j);
        }
    }

    for (int i = 0; i < *m; i++)
    {
        for (int j = 0; j < *n; j++)
        {
            *(C + i * *n + j) = *(A + i * *n + j) + *(B + i * *n + j);
        }
    }

    
    printf("\nA+B=\n");

    for (int i = 0; i < *m; i++)
    {
        for (int j = 0; j < *n; j++)
        {
            printf("%d ",*(C + i* *n + j));
        }
        printf("\n");
    }

    free(m);
    free(n);
    free(A);
    free(B);
    free(C);

    return 0;
}
