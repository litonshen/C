#include <stdio.h>
int main()
{
    int X;
    scanf("%d\n", &X);
    int Z = (X / 1000);
    if (Z % 2 == 0)
    {
        printf("EVEN");
    }
    else
    {
        printf("ODD");
    }
    return 0;
}