#include <stdio.h>
int main()
{
    char S[100001];
    fgets(S, 100001, stdin);

    int length = strlen(S);
    for (int i = 0; i < length; i++)
    {
        if (S[i] >= 'A' && S[i] <= 'Z')
        {
            S[i] = S[i] + ('a' - 'A');
        }
        else if (S[i] >= 'a' && S[i] <= 'z')
        {
            S[i] = S[i] - ('a' - 'A');
        }
        if (S[i]==',')
        {
            S[i]=' ';
        }
        
    }
    printf("%s", S);

    return 0;
}