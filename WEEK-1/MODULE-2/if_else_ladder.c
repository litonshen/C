#include<stdio.h>
int main ()
{
    int tk;
    scanf("%d\n", &tk);

    if (tk >= 100)
    {
        printf("Burger Khabo\n");
    }
    else if (tk >= 50)
    {
        printf("fuska Khabo\n");
    }
    else if (tk >= 10)
    {
        printf("Biskut khabo\n");
    }
    
    else{
        printf("kisu Khabo na\n");
    }
    
    return 0;
}