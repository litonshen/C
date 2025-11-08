#include <stdio.h>
int main()
{
    int a;
    int b;
    scanf("%d", &a);
    scanf("%d", &b);
    int mod1;
    int mod2;
    mod1 = b % a;
    mod2 = a % b;

    if (mod1 == 0 || mod2 == 0)
    {
        printf("Yes");
        
    }
    
    else{

        printf("No");
    }
    return 0;
}