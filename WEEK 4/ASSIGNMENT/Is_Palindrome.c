#include <stdio.h>
#include <string.h>

int is_palindrome(char S[1001])
{
int length = strlen(S);
    int Palindrome = 1;
    for (int i = 0; i < length; i++)
    {
        if (S[i] != S[length - i - 1])
        {
            Palindrome = 0;
            break;
        }
    }
    if (Palindrome==1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
    
}
int main()
{
    char S[1001];
    scanf("%s", S);
   // printf("%s", S);
   int val= is_palindrome(S);
   //printf("%d", val);
if (val==1)
{
    printf("Palindrome");
}
else
{
    printf("Not Palindrome");
}
  
return 0;
}