#include <stdio.h>

void sort (int AR[3])
{
for (int i = 0; i <3-1; i++)
{
    for (int j = i+1; j < 3; j++)
    {
        if (AR[i]>AR[j])
        {
           int temp=AR[i];
            AR[i]=AR[j];
            AR[j]=temp;
        }
        
    } 
}
}
int main()
{
  int AR[3], ORGINAL[3];
  for (int i = 0; i < 3; i++)
  {
    scanf("%d", &AR[i]);
    ORGINAL[i]=AR[i];
  }
  sort(AR);
  for (int i = 0; i < 3; i++)
{
    printf("%d\n", AR[i]);
}
printf("\n");

for (int i = 0; i < 3; i++)
{
    printf("%d\n", ORGINAL[i]);
}
  
  return 0;
}


