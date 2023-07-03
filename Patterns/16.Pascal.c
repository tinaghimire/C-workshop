#include <stdio.h>

void main()
{
    int no_row,c=1,d,i,j;
    int size=5;
    for(i=0;i<size;i++)
    {
        for(d=1;d<=size-i;d++)
            printf(" ");
        for(j=0;j<=i;j++)
        {
            if (j==0||i==0)
                c=1;
            else
               c=c*(i-j+1)/j;   //c=1*(2-1+1)/1---> 2  c=1*(3-1+1)/1--->3   c=4*(4-2+1)/2--->6
            printf("%d ",c);
        }
        printf("\n");
    }
}