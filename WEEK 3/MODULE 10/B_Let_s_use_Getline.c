#include <stdio.h>
#include <string.h>
int main()
{
    char A[1000001];
    fgets(A, 1000001, stdin);
    for (int i = 0; A[i] != '\\'; i++)
    {
        printf("%c", A[i]);
    }
}