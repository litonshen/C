#include <stdio.h>
int main()
{
  int n;
  scanf("%d", &n);
  int A[n];
  for (int i = 0; i < n; i++)
  {
    scanf("%d", &A[i]);
  }
  int DIV2=0;     
  int DIV3=0;
  for (int i = 0; i < n; i++)
  {
    if (A[i]%2==0)
    {
        DIV2++;
    }
    else if (A[i]%3==0)
    {
        DIV3++;
    }
    
  }
  printf("%d %d ", DIV2,DIV3 );
  
return 0;
}