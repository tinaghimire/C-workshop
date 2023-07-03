#include<stdio.h>

int main()
{
    char name[] = "Tensor";
    printf("\t%s\n",name);   
    printf("12345678\n");
    printf("Name:\tPrashant\nRo:\t32\n");
    printf("Contactno:\t984\n");
    printf("1234567890123456\n");
    printf("%s\vTeam\n",name);
    printf("%s\bTeam\n",name);
    printf("%s\v\b\bTeam\n",name);
    printf("%s\rTeam\n",name);
    return 0;
}