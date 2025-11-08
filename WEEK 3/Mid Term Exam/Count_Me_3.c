#include <stdio.h>
#include <string.h>
int main()
{
    int T;
    scanf("%d", &T);
    char SC[10001];

    for (int i = 0; i < T; i++)
    {
        scanf("%s", SC);
        
    int CC = strlen(SC);
    int small = 0;
    int capital = 0;
    int digit = 0;

    for (int i = 0; i <=CC; i++)
    {
        if (SC[i] >= 'a' && SC[i] <= 'z')
        {
            small++;
        }
        else if (SC[i] >= 'A' && SC[i] <= 'Z')
        {
            capital++;
        }
        else if (SC[i] >= '0' && SC[i] <= '9')
        {
            digit++;
        }
    }
     printf("%d %d %d\n", capital, small, digit);
    }
   

    return 0;
}