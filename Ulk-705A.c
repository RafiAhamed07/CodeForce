// https://codeforces.com/problemset/problem/705/A

#include <stdio.h>
int main()
{
    int n, i;
    scanf("%d", &n);
    printf("I hate");
    for (i = 1; i < n; i++)
    {
        printf(i & 1 ? " that I love" : " that I hate");
    }
    printf(" it");
    return 0;
}