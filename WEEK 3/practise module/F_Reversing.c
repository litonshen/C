#include <stdio.h>
int main()
{
  int N;
  scanf("%d", &N);
  int ar[N];
  for (int i = 0; i < N; i++)
  {
    scanf("%d", &ar[i]);
  }
   for (int i = N-1; i>=0; i--) // for reverse printing N er man er thake index er man 1 kim tai ekhane N-1 kora hoise.
  {
    printf("%d ", ar[i]);
  }

return 0;
}