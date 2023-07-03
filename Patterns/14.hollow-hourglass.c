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
        for (j=d+1;j<(2*size-i);j++){
            if (j==d+1 || j==(2*size-i)-1)
                printf("*");
            else
                printf(" ");
        }
        d++;
        printf("\n");
    }
    d-=2;
    for (i=1; i<size; i++){
        // if(i==0){
        //     for (j=0; j<size;j++){
        //         printf("* ");
        //     }
        //     printf("\n");
        //     continue;
        // }
        if(i==size-1){
            for (j=0; j<size;j++){
                printf("* ");
            }
            printf("\n");
            break;
        }
        for (j=0;j<d;j++){
            printf(" ");
        }
        k=2;
        for(j=d-1;j<i+(size-1);j++){
            if (j==d-1 || j==(i+(size-1)-1))
                printf("*");
            else
                printf(" ");
        }
        d--;
        printf("\n");
    }
    return 0;
}