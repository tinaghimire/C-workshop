#include<stdio.h>
int main(){
    int i=1,j=0;
    while(i<=10)
    {
        printf("%d \t",i);
        i++;
    }
    printf("\n");

    do{
        printf("%d \t",j);
        j++;
    }while(j>0 && j<10);
    printf("\n");

    j=10;
    while(j<10)
    {
        printf("%d \t",j);
        j--;
    }
    return 0;
}