#include <stdio.h>
int main()
{
    int N;
    scanf("%d", &N);
    int ar[N];
    for (int i = 0; i < N; i++)
    {
        scanf("%d", &ar[i]);
    }
    int Left_INDEX = 0;
    int Right_INDEX = N - 1;
    int Palindrome = 1;
    while (Left_INDEX < Right_INDEX)
    {
        if (ar[Left_INDEX] != ar[Right_INDEX])
        {
            Palindrome = 0;
            break;
        }
        Left_INDEX++;
        Right_INDEX--;
    }
    if (Palindrome==0)
    {
        printf("NO");
    }
    else
    {
        printf("YES");
    }

    return 0;
}