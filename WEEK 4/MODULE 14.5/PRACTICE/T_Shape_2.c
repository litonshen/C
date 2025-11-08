#include <stdio.h>
int main()
{
  int n;
  scanf("%d", &n);
  int Star = 1;
  int Space = (n - 1);
  for (int i = 1; i <= n; i++)
  {
    for (int k = 1; k <= Space; k++)
    {
      printf(" "); // for Space Print
    }
    Space--;

    for (int j = 1; j <= Star; j++) // for Star Print
    {
      printf("*");
    }
    Star += 2;
    printf("\n"); //  For Lines Print
  }

  return 0;
}
