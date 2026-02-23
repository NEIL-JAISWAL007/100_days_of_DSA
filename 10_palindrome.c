// 10. Check if a string is a palindrome using two-pointer comparison
#include <stdio.h>
#include <string.h>
int main()
{
    char s[101];
    int i, j, n;
    printf("Enter string: ");
    scanf("%s", s);
    n = strlen(s);
    i = 0;
    j = n - 1;
    while (i < j)
    {
        if (s[i] != s[j])
        {
            printf("NO\n");
            return 0;
        }
        i++;
        j--;
    }
    printf("YES\n");
    return 0;
}
