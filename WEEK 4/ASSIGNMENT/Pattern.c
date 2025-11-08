#include <stdio.h>
int main()
{
    int N;
    scanf("%d", &N);
    int space;
    int lineCount;

    for (int i = 1; i <= N; i++) // for upper symble
    {
        space = N - i;
        for (int j = 1; j <= space; j++)
        {
            printf(" ");
        }
        if (i % 2 == 1) // odd line er jonno print
        {
            lineCount = (2 * i) - 1;
            for (int k = 1; k <= lineCount; k++)
            {
                printf("#");
            }
        }
        else
        {
            lineCount = (2 * i) - 1;
            for (int k = 1; k <= lineCount; k++)
            {
                printf("-");
            }
        }

        printf("\n");
    }

    for (int i = N - 1; i >= 1; i--) // for lower symble
    {
        space = N - i;
        for (int j = 1; j <= space; j++)
        {
            printf(" ");
        }
        if (i % 2 == 1) // odd line er jonno print
        {
            lineCount = (2 * i) - 1;
            for (int k = 1; k <= lineCount; k++)
            {
                printf("#");
            }
        }
        else
        {
            lineCount = (2 * i) - 1;
            for (int k = 1; k <= lineCount; k++)
            {
                printf("-");
            }
        }

        printf("\n");
    }

    return 0;
}