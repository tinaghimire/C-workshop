#include<stdio.h>

int main()
{
    int i,j;
    int matrix[2][3] = { {1, 4, 2}, {3, 6, 8} };
    for (i=0; i<2; i++){
        for (j=0; j<3; j++){
                printf("%d\t",matrix[i][j]);
        }
        printf("\n");
    }
    return 0;
}