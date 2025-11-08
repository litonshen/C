#include <stdio.h>
int main()
{
    int AR[3], ORGINAL[3];
    for (int i = 0; i < 3; i++)
    {
        scanf("%d", &AR[i]);
        ORGINAL[i]=AR[i];  // AR[i] er input copy korlam 
    }
    int temp = AR[0];
    for (int i = 0; i < 3 - 1; i++)
    {
        for (int j = i + 1; j < 3; j++)
        {
            if (AR[i] > AR[j])
            {
                temp = AR[i];
                AR[i] = AR[j];
                AR[j] = temp;
            }
        }
    }
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