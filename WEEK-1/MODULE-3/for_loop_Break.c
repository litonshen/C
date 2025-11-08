#include<stdio.h>
int main()
{
    int i;
    for ( i = 1; i <=10; i=i+1)
    {
        if (i>=6)
        {
            break;
        }
        printf("%d\n", i);
    }
    
}