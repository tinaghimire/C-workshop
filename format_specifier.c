#include<stdio.h>

int main()
{
    float a=10.12434565;
    printf("%f\n",a);
    printf("%.2f\n",a);
    printf("%1.2f\n",a);
    printf("%10.3f Hi\n",a);
    printf("%010.3f\n",a);
    printf("%-10.3f Hi\n",a);
    return 0;
}