#include<stdio.h>

int main()
{
    int i,j,d=5,k,size=5;
    for (i=0; i<size; i++){
        if(i==size-1){
            for (j=0; j<size;j++){
                printf("  * ");
            }
            printf("\n");
            break;
        }
        for (j=0;j<d;j++){
            printf("  ");
        }
        k=1;
        for (j=d-1;j<=i+(size-1);j++){
            if (j==d-1 || j==(i+(size-1)))
                printf("* ");
            else
                printf("  ");
            k++;
        }
        d--;

        printf("\n");
    }
    return 0;
}