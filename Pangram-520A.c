// https://codeforces.com/problemset/problem/520/A
#include <stdio.h>
#include <ctype.h>
#include <string.h>

char *is_pangram(int n, char s[])
{
    int letters[26] = {0};
    int unique_count = 0;

    for (int i = 0; i < n; i++)
    {
        char c = tolower(s[i]);

        if (c >= 'a' && c <= 'z')
        {
            int index = c - 'a';
            if (!letters[index])
            {
                letters[index] = 1;
                unique_count++;
            }
        }
    }

    if (unique_count == 26)
    {
        return "YES";
    }
    else
    {
        return "NO";
    }
}

int main()
{
    int n;
    scanf("%d", &n);
    char s[n + 1];
    scanf("%s", s);

    printf("%s\n", is_pangram(n, s));

    return 0;
}
