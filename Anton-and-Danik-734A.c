// https://codeforces.com/problemset/problem/734/A
#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    char results[n + 1];
    scanf("%s", results);

    int anton_wins = 0;
    int danik_wins = 0;

    for (int i = 0; i < n; i++) {
        if (results[i] == 'A') {
            anton_wins++;
        } else if (results[i] == 'D') {
            danik_wins++;
        }
    }

    if (anton_wins > danik_wins) {
        printf("Anton\n");
    } else if (anton_wins < danik_wins) {
        printf("Danik\n");
    } else {
        printf("Friendship\n");
    }

    return 0;
}
