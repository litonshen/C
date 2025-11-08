#include <stdio.h>

int sum(int a, int b)
{
    int ans = a + b;
    return ans;
}
int main()
{
    int x;
    int y;
    scanf("%d %d", &x, &y);
    int val = sum(x, y);
    printf("%d", val);
    return 0;
}