#include <stdio.h>
void maxmin(int A[], int N, int *MIN,int *MAX )
{
    *MIN=A[0];
    for (int i = 0; i < N; i++)
    {
      if (A[i]<*MIN)
      {
        *MIN=A[i];
      }
    if (A[i]>*MAX)
    {
      *MAX=A[i];
    }
    
    }
   printf("%d %d",*MIN,*MAX);
    
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
    int MIN,MAX;
    maxmin(A,N,&MIN,&MAX);
    //printf("%d %d", MIN,MAX);
    return 0;
}