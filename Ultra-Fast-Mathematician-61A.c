// https://codeforces.com/problemset/problem/61/A

#include <stdio.h>
#include <string.h>

int main()
{
    char num1[100], num2[100], result[100];

    // Reading the two binary strings
    scanf("%s %s", num1, num2);

    int length = strlen(num1);

    for (int i = 0; i < length; ++i)
    {
        if (num1[i] != num2[i])
        {
            result[i] = '1';
        }
        else
        {
            result[i] = '0';
        }
    }

    result[length] = '\0';

    printf("%s\n", result);

    return 0;
}
