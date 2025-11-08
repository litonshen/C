#include <stdio.h>
#include <string.h>
int main()
{
    char S[100001];
    scanf("%s", S);
    int Count_C = strlen(S);
    int consonants = 0;
    for (int i = 0; i < Count_C; i++)
    {
        if ((S[i] >= 'a' && S[i] <= 'z') && !(S[i] == 'a' || S[i] == 'e' || S[i] == 'i' || S[i] == 'o' || S[i] == 'u'))
        {
            consonants++;
        }
    }

    printf("%d", consonants);
    return 0;
}