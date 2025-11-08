#include <stdio.h>
int main()
{
  int n;
  scanf("%d", &n);
  int ar[n];
for (int i = 0; i < n; i++)
{
    scanf("%d", &ar[i]);
}
int x=0;
int y=n-1;
while (x<y)
{
    int temp=ar[x];
    ar[x]=ar[y];
    ar[y]=temp;

    x++;
    y--;
}
for (int i = 0; i <n; i++)
{
    printf("%d ", ar[i]);
}

return 0;
}