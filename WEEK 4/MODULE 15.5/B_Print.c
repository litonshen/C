#include <stdio.h>
void print(int N)
{
    for (int i = 1; i <N; i++)
    {
        printf("%d ", i);
    }
    printf("%d", N);
}
int main()
{
    int X;
    scanf("%d", &X);
    print(X);
    return 0;
}
