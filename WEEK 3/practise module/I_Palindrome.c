#include <stdio.h>
int main()
{
    char S[1001];
    scanf("%s", &S);
    int length = strlen(S);
    int Palindrome = 1;
    for (int i = 0; i < length; i++)
    {
        if (S[i] != S[length - i - 1])
        {
            Palindrome = 0;
            break;
        }
    }
    if (Palindrome==1)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }

    return 0;
}