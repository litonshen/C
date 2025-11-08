#include <stdio.h>
#include <limits.h>

int main()
{
    int n;
    scanf("%d", &n);
    int mx = INT_MIN;
    for (int i = 1; i <= n; i++)
    {
        int valu;
        scanf("%d", &valu);
        if (valu>mx)
        {
            mx = valu;
        }
    }
    printf("%d", mx);

    return 0;
}