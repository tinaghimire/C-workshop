#include<stdio.h>

int main()
{
    int i,j,d=1,k,size=5;
    for (i=0; i<size; i++){
        if(i==0){
            for (j=0; j<size;j++){
                printf("* ");
            }
            printf("\n");
            continue;
        }
        for (j=0;j<d;j++){
            printf(" ");
        }
        k=1;
        for (j=d;j<(2*size-i);j++){
            if (j==d || j==(2*size-i-2))
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