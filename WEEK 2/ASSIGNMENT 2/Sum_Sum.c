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

  int sum_PN = 0;
  for (int i = 0; i < N; i++)
  {
    if (ar[i] > 0)
    {
      sum_PN = sum_PN + ar[i];
    }
  }
  int sum_NN = 0;
  for (int i = 0; i < N; i++)
  {
    if (ar[i] < 0)
    {
      sum_NN = sum_NN + ar[i];
    }
  }
  printf("%d ", sum_PN);
  printf("%d ", sum_NN);
  return 0;
}