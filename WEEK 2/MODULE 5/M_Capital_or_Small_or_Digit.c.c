#include <stdio.h>
int main()
{
    char x;
    scanf(" %c\n", &x);

    if (x >= 48 && x <= 57)
    {
        printf("IS DIGIT\n");
    }
    else {
        printf("ALPHA\n");
        if (x >= 'A' && x <= 'Z')
        {
            printf("IS CAPITAL");
        }
        else{
            printf("IS SMALL");
        }
    }
    return 0;
}