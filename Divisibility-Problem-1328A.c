// https://codeforces.com/problemset/problem/1328/A
#include <stdio.h>

int main() {
    int t;
    scanf("%d", &t);

    while (t--) {
        int a, b;
        scanf("%d %d", &a, &b);

        int moves = (b - a % b) % b;
        printf("%d\n", moves);
    }

    return 0;
}
