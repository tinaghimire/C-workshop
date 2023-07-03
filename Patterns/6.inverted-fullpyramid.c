#include<stdio.h>

int main()
{
    int i,j,d=1,k,size=5;
    for (i=0; i<size; i++){
        for (j=0;j<=d;j++){
            printf(" ");
        }
        k=1;
        for (j=d+1;j<=(2*size-i);j++){
            if (k%2==1)
                printf("*");
            else
                printf(" ");
            k++;
        }
        d++;
        printf("\n");
    }
    return 0;
}