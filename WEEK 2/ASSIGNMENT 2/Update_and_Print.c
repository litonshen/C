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
    int X;
    int V;
    scanf("%d", &X);
    scanf("%d", &V);
    ar[X] = V;

    // printf("%d %d \n", X,V);

    for (int i = N - 1; i >= 0; i--) // Reverse print
    {
        printf("%d ", ar[i]);
    }

    return 0;
}   