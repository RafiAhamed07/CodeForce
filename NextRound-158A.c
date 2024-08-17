// https://codeforces.com/problemset/problem/158/A
#include <stdio.h>

int main() {
    int n, k;
    scanf("%d %d", &n, &k);

    int scores[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &scores[i]);
    }

    int kth_place_score = scores[k - 1];

    int count = 0;
    for (int i = 0; i < n; i++) {
        if (scores[i] >= kth_place_score && scores[i] > 0) {
            count++;
        }
    }

    printf("%d", count);

    return 0;
}