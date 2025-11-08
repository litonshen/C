#include <stdio.h>
#include <string.h>
int main()
{
    char A[101], B[101];
    scanf("%s %s", &A, &B);

    int val = strcmp(A, B);

    if (val < 0)
    {
        printf("A is small");
    }
    else if (val == 0)
    {
        printf("Equal");
    }
    else if (val > 0)
    {
        printf("B is small");
    }

    return 0;
}