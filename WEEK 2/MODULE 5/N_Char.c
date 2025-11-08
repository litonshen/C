#include <stdio.h>
int main()
{
    char x;
    scanf("%c", &x);
    char l = x + 32;
    char u = x - 32;
    if (x>='A' && x<='Z')
    {
        printf("%c\n", l);
    }
    else if (x>='a' && x<='z')
    {
        printf("%c\n", u);
    }
    
    return 0;
}