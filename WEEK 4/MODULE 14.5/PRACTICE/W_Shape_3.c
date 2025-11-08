#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int Star = 1;
    int Space = (n - 1);
    for (int i = 1; i <= 2*n; i++)
    {
        for (int k = 1; k <= Space; k++)
        {
            printf(" "); // for Space Print
        }
        for (int j = 1; j <= Star; j++) // for Star Print
        {
            printf("*");
        }
        if (i<n)
        {
            Space--;
            Star += 2;
        }
        // else if (i==n)
        // {
        //        // do nothing, keep same Space and Star for next line
        // }
        
        else
        {
            Space++;
            Star-=2;
        }
        
     printf("\n"); //  For Lines Print
    }

    return 0;
}
