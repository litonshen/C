#include <stdio.h>

void odd_even()
{
    
    int even=0;
    int odd=0;
    int N;
    scanf("%d", &N);
    int A[N];
    for (int i = 0; i < N; i++)
    {
        scanf("%d", &A[i]);
    }
    
    for (int i = 0; i < N; i++)
    {
        if (A[i]%2==0)
        {
            even++;
        }
        else if (A[i]%2==1)
        {
            odd++;
        }
    }
    printf("%d %d", even,odd);
   
}
int main()
{
odd_even();  // sudu matro funtion ke call kora hoise R sob kaj funtion er vitor kora hoise
return 0;
}