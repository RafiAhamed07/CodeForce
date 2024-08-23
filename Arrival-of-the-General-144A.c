// https://codeforces.com/problemset/problem/144/A
#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int heights[n];
    int max_height = -1, min_height = 101;
    int max_index = 0, min_index = 0;

    for (int i = 0; i < n; i++) {
        scanf("%d", &heights[i]);

        if (heights[i] > max_height) {
            max_height = heights[i];
            max_index = i;
        }
        if (heights[i] <= min_height) {
            min_height = heights[i];
            min_index = i;
        }
    }

    int moves = max_index + (n - 1 - min_index);

    if (max_index > min_index) {
        moves--;
    }

    printf("%d\n", moves);

    return 0;
}
