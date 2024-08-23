// https://codeforces.com/problemset/problem/228/A

#include <stdio.h>

int main()
{
    int shoes[4];
    int count = 0;

    // Reading input sizes
    for (int i = 0; i < 4; i++)
    {
        scanf("%d", &shoes[i]);
    }

    // Counting duplicates
    for (int i = 0; i < 4; i++)
    {
        for (int j = i + 1; j < 4; j++)
        {
            if (shoes[i] == shoes[j])
            {
                count++;
                break; // Avoid counting the same size multiple times
            }
        }
    }

    // Output the result
    printf("%d\n", count);

    return 0;
}
