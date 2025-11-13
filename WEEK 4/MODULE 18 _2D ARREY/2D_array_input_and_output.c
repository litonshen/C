#include <stdio.h>
int main()
{
  int row,collum;
  scanf("%d %d", &row,&collum);
  int ar[row][collum];
  for (int i = 0; i <row; i++)
  {
    for (int j = 0; j < collum; j++)
    {
        scanf("%d", &ar[i][j]);
    }
    
  }
  
  for (int i = 0; i <row; i++)
  {
    for (int j = 0; j < collum; j++)
    {
        printf("%d ", ar[i][j]);

    }
    printf("\n");
  }
return 0;
}