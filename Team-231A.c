// https://codeforces.com/problemset/problem/231/A
#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    int problems_solved = 0;

    for (int i = 0; i < n; i++)
    {
        int petya, vasya, tonya;
        scanf("%d %d %d", &petya, &vasya, &tonya);

        int sure_count = petya + vasya + tonya;

        if (sure_count >= 2)
        {
            problems_solved++;
        }
    }

    printf("%d", problems_solved);

    return 0;
}

// 3
// 1 1 0
// 1 1 1
// 1 0 0