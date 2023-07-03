#include<stdio.h>
#define n 3
int main()
{
    int A[n][n], B[n][n], C[n][n], sum=0, i, j, k;
    printf("Enter first matrix element:\n");
    for(i=0; i<n; i++)
    {
        for(j=0; j<n; j++)
        {
            printf("A[%d][%d]= ",i+1,j+1);
            scanf("%d", &A[i][j]);
        }
    }
    printf("Enter second matrix element:\n");
    for(i=0; i<n; i++)
    {
        for(j=0; j<n; j++)
        {
            printf("B[%d][%d]= ",i+1,j+1);
            scanf("%d", &B[i][j]);
        }
    }
    printf("\nMultiplying two matrices (A*B)");
    for(i=0; i<n; i++)
    {
        for(j=0; j<n; j++)
        {
            sum=0;
            for(k=0; k<n; k++)
                sum = sum + A[i][k] * B[k][j];
                C[i][j] = sum;
        }
    }

    printf("The matrix A: \n");
    for(i=0; i<n; i++)
    {
        for(j=0; j<n; j++)
            printf("%d\t", A[i][j]);
        printf("\n");
    }

    printf("\nThe matrix B: \n");
    for(i=0; i<n; i++)
    {
        for(j=0; j<n; j++)
            printf("%d\t", B[i][j]);
        printf("\n");
    }
    printf("\nMultiplication of A and B matrix is: \n");
    for(i=0; i<n; i++)
    {
        for(j=0; j<n; j++)
            printf("%d\t", C[i][j]);
        printf("\n");
    }
    return 0;
}
