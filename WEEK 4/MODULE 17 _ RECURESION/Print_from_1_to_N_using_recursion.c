#include <stdio.h>

void re_N(int i, int N)
{
    if (i ==1+N)
    {
        return;
    }
    printf("%d\n", i);
    re_N(i + 1,N);
}

int main()

{
    int N;
    scanf("%d", &N);
    int i=1;
    re_N(1,N); // funtion ke call korlam
    return 0;
}