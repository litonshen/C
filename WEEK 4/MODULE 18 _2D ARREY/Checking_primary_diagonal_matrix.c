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

int Primary_DI_M=1; // ekta flug niasi

for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < collum; j++)
        {
            if (i==j)   // jodi row and index soman hoi taile amra korno er upore asi
            {
                continue;
            }
            if (ar[i][j]!=0)
            {
                Primary_DI_M=0;
            } 
        }
    }
    if (Primary_DI_M==1)
    {
        printf("Primary Diagonal Matrix");
    }
    else
    {
       printf("Not Primary Diagonal Matrix");
    }
    
    return 0;
}