#include <stdio.h>
int main()
{
  int N;
  scanf("%d", &N);
  int FD=N/10;  // formullal first digit
  int SD=N%10;  // formulla second digit
if (SD !=0 && FD%SD==0 || SD%FD==0)
{
  printf("YES");
}
else{
  printf("NO");
}
return 0;
}