#include<stdio.h>

int main()
{
    int i,j,size=5;
    for (i=0; i<size; i++){
        if(i==0 || i==size-1){
            for (j=0;j<size;j++){
                printf("* ");
            }
        }
        else{
            for (j=0;j<size;j++){
                if(j==0 || j==size-1)
                    printf("* ");
                else    
                    printf("  ");
            }
        }
        printf("\n");
    }
    return 0;
}