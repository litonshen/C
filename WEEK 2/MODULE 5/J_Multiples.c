#include <stdio.h>
int main()
{
    int A;
    int B;
    scanf("%d\n", &A);
    scanf("%d\n", &B);
    if (A % B == 0 || B % A == 0)
    {
        printf("Multiples\n");
    }
    else
    {
        printf("No Multiples");
    }
    return 0;
}