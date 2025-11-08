#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int ar[n];
    int i;
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &ar[i]);
    }

    int MIN = ar[0];
    int POS=0;
    for (int i = 0; i < n; i++)
    {
        if (ar[i] < MIN)
        {
            MIN=ar[i];
            POS=i;
        }
    }
printf("%d %d", MIN,POS+1);
return 0;
}