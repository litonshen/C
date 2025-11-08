#include <stdio.h>
int main()
{
    int N1;
    scanf("%d", &N1);
    int N2=N1-1000;
    if (N1 > 1000 )
    {
        printf("I will buy Punjabi\n");
        if (N2 >= 500)
        {
            printf("I will buy new shoes\n");
            printf("Alisa will buy new shoes\n");
        }
       
    }
     else
        {
            printf("Bad luck!\n");
        }
    return 0;
}