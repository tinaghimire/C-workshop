#include<stdio.h>

int main()
{
    int i,j,d=5,k;
    for (i=0; i<5; i++){
        for (j=0;j<d;j++){
            printf("* ");
        }
        for (j=d-1;j<=i+4;j++){
            printf(" ");
        }
        for (j=i+4;j<9;j++){
            printf("* ");
        }
        d--;
        printf("\n");
    }
    return 0;
}