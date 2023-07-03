#include <stdio.h>
int main() 
{
    int number=2;
    char a='a';
    switch (number) 
    {
        case 1:
        case 2:
        case 3:
            printf("One, Two, or Three.\n");
            switch(a)
            {
                case 'b':
                    printf("b\n");
                    break;
                case 'a':
                    printf("a\n");
                    break;
                default:
                    printf("Not a or b\n");
                    break;
            }
            break;
        case 4:
        case 5:
        case 6:
            printf("Four, Five, or Six.\n");
            break;
        default:
            printf("Greater than Six.\n");
            break;
    }
}