#include <stdio.h>
int main()
{
    long long int N;
    scanf("%lld", &N);
    long long int i;
    long long int ar[N];
    for (i = 0; i < N; i++)
    {
        scanf("%lld", &ar[i]);
    }
    long long int X;
    scanf("%lld", &X);
    long long int S = 0;
    for (i = 0; i < N; i++)
    {
        if (X == ar[i])
        {
            S = S + 1;
        }
    }
    if (S >= 2)
    {
        printf("0");
    }
    else if (S == 1)
    {
        printf("1");
    }
    else
    {
        printf("-1");
    }

    return 0;
}