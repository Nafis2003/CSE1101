#include <stdio.h>


void PrintMatrix(int m,int n,int A[m][n],char c){
    printf("Printing matrix %c: \n",c);
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("%d ", A[i][j]);
        }
        printf("\n");
    }
}


int main()
{
    int m, n;
    printf("Dimension of A and B:");
    scanf("%d %d",&m,&n);
    int A[m][n], B[m][n],C[m][n];

    //Input A
    printf("Input Matrix A : \n");
    for (int i = 0; i < m;i++){
        for (int j = 0; j < n;j++){
            scanf("%d", &A[i][j]);
        }
    }
    // Input B
    printf("Input Matrix B : \n");
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &B[i][j]);
        }
    }

    PrintMatrix(m,n,A,'A');
    PrintMatrix(m,n,B,'B');

    for (int i = 0; i < m;i++){
        for (int j = 0; j < n; j++)
        {
            C[i][j] = A[i][j] + B[i][j];
        }
        
    }
    PrintMatrix(m, n, C, 'C');
    return 0;
}