#include <stdio.h>
#include <string.h>
int main()
{
    char ST[10001];
    scanf("%s", ST);

    int STC = strlen(ST);
    int freq_small[26] = {0};
    for (int i = 0; i < STC; i++)
    {
        if (ST[i] >= 'a' && ST[i] <= 'z')
        {
            int val = ST[i] - 'a';
            freq_small[val]++;
        }
    }

    for (int i = 0; i < 26; i++)
    {
        if (freq_small[i] > 0)
            printf("%c - %d\n", 'a'+i,freq_small[i]);
    }

    return 0;
}