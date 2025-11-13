#include <stdio.h>

void re_N(int arr[], int N, int i)
{
    if (i == N)
    {
        return;
    }

    printf("%d\n", arr[i]);
    re_N(arr, N, i + 1);
}

int main()

{
    int N;
    scanf("%d", &N);
    int arr[N];
    for (int i = 0; i < N; i++)
    {
        scanf("%d", &arr[i]);
    }
    re_N(arr, N, 0); // funtion ke call korlam
    return 0;
}