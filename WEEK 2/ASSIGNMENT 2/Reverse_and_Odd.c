#include <stdio.h>
int main()
{
    int N;
    scanf("%d", &N);
    int ar[N];
    int i;
    for (i = 0; i < N; i++)
    {
        scanf("%d", &ar[i]);
    }

    for (i = N-1; i >=0; i--)
    {
        if (i%2==1)
        {
            printf("%d ", ar[i]);
        }
    }
    return 0;
}