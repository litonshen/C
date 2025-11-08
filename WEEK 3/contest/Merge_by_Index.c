#include <stdio.h>
#include <string.h>
int main()
{
  char S1[1001];
  char S2[1001];
  scanf("%s %s", S1,S2);
  int START;
  int END;
  scanf("%d %d", &START,&END);
  int Lentgh = strlen(S1);
  int Index=Lentgh;

  for (int i = START; i <=END; i++)
  {
    S1[Index]=S2[i];
    Index++;
  }
  S1[Index]='\0';

printf("%s\n", S1);
return 0;
}