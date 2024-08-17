// https://codeforces.com/problemset/problem/266/A

#include <stdio.h>

int main() {
    int n, count = 0;
    char stones[101];  // Assuming n won't exceed 100

    scanf("%d", &n);
    scanf("%s", stones);

    for (int i = 1; i < n; i++) {
        if (stones[i] == stones[i-1]) {
            count++;
        }
    }

    printf("%d\n", count);

    return 0;
}
