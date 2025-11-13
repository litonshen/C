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

    int element = row * collum;
    int cnt = 0;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < collum; j++)
        {
            if (ar[i][j] == 0)
            {
                cnt++;
            }
        }
    }
    if (element==cnt++)
    {
        printf("Zero matrix");
    }
    else
    {
        printf("Non Zero matrix");
    }

    return 0;
}