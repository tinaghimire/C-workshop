#include<stdio.h>
#define size 5 
int main()
{
    int i,j;
    for (i=0; i<size; i++){
        for (j=0; j<size-i; j++){
            printf("  ");
        }
        for (j=0;j<=i;j++){   // for (j=size-i;j<size;j++)
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}