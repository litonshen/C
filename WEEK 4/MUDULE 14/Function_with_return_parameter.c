#include <stdio.h>

int sum(int num1, int num2)
{
    int ans = num1 + num2;
    return ans; // ans return korlo main funtion e jekhane amra sum ke call korsi
}
int main()
{
    int val = sum(10, 11); // sum fuction ke call korlam
    //printf("%d", val);
    printf("%d", sum(10, 11));
    return 0;
}