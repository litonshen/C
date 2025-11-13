#include <stdio.h>
int main()
{
    int row, collum;
    scanf("%d %d", &row, &collum);
    int ar[row][collum];
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < collum; j++)
        {
            scanf("%d", &ar[i][j]);
        }
    }

    int r;
    scanf("%d", &r);
    for (int i = 0; i < collum; i++) // specific row ber korar jonno collum er upore loop chalano hoise
    {

        printf("%d ", ar[r][i]);
    }
    printf("\n");

    int c;
    scanf("%d", &c);
    for (int i = 0; i < row; i++) // specific collum  ber korar jonno row er upore loop chalano hoise
    {

        printf("%d ", ar[i][c]);
    }

    return 0;
}