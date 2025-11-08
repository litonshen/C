#include <stdio.h>
#include <string.h>
int main()
{
  char A[1000001];
  scanf("%s",A);
int length = strlen(A);
int sum=0;
for (int i = 0; i < length; i++)
{
    sum+=A[i]-'0';
}
 
printf("%d", sum);
return 0;
}
