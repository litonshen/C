#include <stdio.h>
int main()
{
  int N;
  scanf("%d", &N);
  int space;
for (int i = 1; i <=N; i++)
{
    space=N-i;
    for (int j = 1; j <=space; j++)
    {
        printf(" ");
    }
    for (int k = i; k >=1; k--) // revures print koro
    {
       {
        printf("%d", k );
       }
    }  
    printf("\n");

}

return 0;
}