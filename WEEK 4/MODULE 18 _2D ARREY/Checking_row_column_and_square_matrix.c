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
    // if (row==1)   // row matrix check policy
    // {
    //     printf("Row matric");
    // }
    // else
    // {
    //     printf("Not Row matric");
    // }
    // printf("\n");

    
    //   if (collum==1)   // collum matrix check policy
    // {
    //     printf("collum matric");
    // }
    // else
    // {
    //     printf("Not collum matric");
    // }

       if (row==collum)   // Sqare matrix check policy
    {
        printf("square matrix");
    }
    else
    {
        printf("Not square matrix");
    }

    return 0;
}