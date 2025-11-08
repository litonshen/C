#include <stdio.h>
int main()
{
    int T;
    scanf("%d", &T);
    int M1[1000], M2[1000], D[1000];
    for (int i = 0; i < T; i++)
    {
        scanf("%d %d %d", &M1[i], &M2[i], &D[i]);
    }
    int TM = 0;
    int Y = 0;
    int RD = 0;
    for (int i = 0; i < T; i++)
    {
        TM = M1[i] + M2[i];
        Y = (M1[i] * D[i]) / TM;
        RD = D[i] - Y;
        printf("%d\n", RD);
    }
    return 0;
}