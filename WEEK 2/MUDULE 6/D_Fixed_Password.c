#include <stdio.h>
int main()
{
    int pw;
    while (scanf("%d", &pw))
    {
        if (pw == 1999)
        {
            printf("Correct\n");
            break;
        }
        else
        {
            printf("Wrong\n");
        }
        
    }
    return 0;
}