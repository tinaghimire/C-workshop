#include<stdio.h>

int main()
{
    int i,j,d=5;
    for (i=0; i<5; i++){
        for (j=0;j<d;j++){
            printf(" ");
        }
        int k=1;
        for (j=d-1;j<5;j++){
                printf("%d",k);
                k++;
            }
        for (j>5;j<=i+4;j++){
            printf("%d",k-2);
            k--;
        }
        d--;
        printf("\n");
    }
    return 0;
}