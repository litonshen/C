#include <stdio.h>
#include <string.h>
int main()
{
    int N;
    scanf("%d", &N);
    char S[N][101];
    for (int i = 0; i < N; i++)
    {
        scanf("%s", S[i]);
    }

    for (int i = 0; i < N; i++)
    {
        int length = strlen(S[i]);
        char First_C = S[i][0];
        char Last_c = S[i][length - 1];
        if (length <= 10)
        {
            printf("%s\n", S[i]);
        }
        else if (length > 10)
        {
            printf("%c%d%c\n", First_C, (length - 2), Last_c);
        }
    }
    return 0;
}