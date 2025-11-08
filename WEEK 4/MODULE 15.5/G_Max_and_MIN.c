#include <stdio.h>
void maxmin(int A[], int N)
{
    int MIN=A[0];
    int MAX=A[0];
    for (int i = 0; i < N; i++)
    {
      if (A[i]>MAX)
      {
        MAX=A[i];
      }
      else if (A[i]<MIN)
      {
        MIN=A[i];
      }
    }
    printf("%d %d", MIN,MAX);
    
}
int main()
{
    int N;
    scanf("%d", &N);
    int A[N];

    for (int i = 0; i < N; i++)
    {
        scanf("%d", &A[i]);
    }
    maxmin(A,N);
    return 0;
}