#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int ar[n + 1];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &ar[i]);
    }
    int idx;
    int val;

    scanf("%d %d", &idx, &val);

    for (int i = n; i >= idx + 1; i--) // ekta loop chalalam sesh er index er value ek gor pre jai, taile agher gor faka hoe jai
    {
        ar[i] = ar[i - 1]; // ar[i] index e agher gor er value input korlam
    }

    ar[idx]=val;
    for (int i = 0; i <=n; i++)
    {
        printf("%d ", ar[i]);
    }

    return 0;
}