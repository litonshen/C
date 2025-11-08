#include <stdio.h>
int main()
{
    int tk;
    scanf("%d\n", &tk);

    if (tk >= 6000)
    {
        printf("Cox's Bazar Jabo\n");
        if (tk >= 10000)  //nested else//
        {
            printf("Senmartin Jabo\n");
        }
        else
        {
            printf("Coxbazar koi din Thake phire asbo\n");
        }
    }
    else
    {
        printf("kotao jabo na\n");
    }

    return 0;
}