#include <stdio.h>

int main()
{
    int m1, n1,m2,n2,ne=0;
    printf("Dimension of A:");
    scanf("%d %d", &m1, &n1);
    printf("Dimension of B:");
    scanf("%d %d", &m2, &n2);
    int A[m1][n1], B[m2][n2], C[m1][n2];

    if (n1!=m2)
    {
        printf("A*B cant not be determined");
        return 0;
    }
    

    // Input A
    printf("Input Matrix A : \n");
    for (int i = 0; i < m1; i++)
    {
        for (int j = 0; j < n1; j++)
        {
            scanf("%d", &A[i][j]);
        }
    }
    // Input B
    printf("Input Matrix B : \n");
    for (int i = 0; i < m2; i++)
    {
        for (int j = 0; j < n2; j++)
        {
            scanf("%d", &B[i][j]);
        }
    }
    //Multiplication
    for (int i = 0; i < m1; i++)
    {
        for (int k = 0; k < n2; k++)
        {
            for (int j = 0; j < n1; j++)
            {
                ne += A[i][j] * B[j][k];
            }
            C[i][k] = ne;
            ne = 0;
        }
        
    }
    //Printing the result
    printf("A*B  = \n");
    for (int i = 0; i < m1; i++)
    {
        for (int j = 0; j < n2; j++)
        {
            printf("%d ", C[i][j]);
        }
        printf("\n");
    }
    return 0;
}