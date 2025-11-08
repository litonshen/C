#include <stdio.h>
int main()
{
    char A;
    scanf("%c", &A);
    if (A >= 'a' && A <= 'z')
    {
        if (A == 'z')
        {
            printf("a");
        }
        else
        {
            printf("%c", A + 1);
        }
    }

    return 0;
}