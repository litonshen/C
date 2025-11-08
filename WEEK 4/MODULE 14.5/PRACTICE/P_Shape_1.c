#include <stdio.h>
int main()
{
  int n;
  scanf("%d", &n);
 int Star =n;
  for (int i = 1; i <=n; i++)
  {
    for (int j =1; j<=Star; j++)
    {
        printf("*");
    }
    Star--;
    printf("\n");
  }
  
return 0;
}

