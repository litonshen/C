#include <stdio.h>
#include <stdlib.h>
int main()
{
    int N;
    scanf("%d", &N);
    long long int A[N];
    long long int i;
    for (i = 0; i < N; i++)
    {
        scanf("%lld", &A[i]);
    }
    long long int sum = 0;
    for (i = 0; i < N; i++)
    {
        sum = sum + A[i];
    }
    printf("%lld", llabs(sum));
}