#include<stdio.h>

int main()
{
    int i,j,d=5,k,size=5;
    for (i=0; i<size; i++){
        for (j=0;j<d;j++){
            printf("  ");
        }
        // k=1;
        for (j=d-1;j<=i+(size-1);j++){
            if (j==d-1 || j==i+(size-1))
                printf("* ");
            else
                printf("  ");
            k++;
        }
        d--;
        printf("\n");
    }
    d+=1;
    for (i=0; i<size-1; i++){
        for (j=0;j<=d;j++){
            printf("  ");
        }
        k=1;
        for (j=d;j<=(2*(size-1)-i);j++){
            if (j==d || j==2*(size-1)-i-1)
                printf("* ");
            else
                printf("  ");
            k++;
        }
        d++;
        printf("\n");
    }
    return 0;
}