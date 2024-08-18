// https://codeforces.com/problemset/problem/136/A
#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int gift_giver[n];

    for (int i = 0; i < n; ++i) {
        scanf("%d", &gift_giver[i]);
    }

    for (int i = 0; i < n; ++i) {
        
        int gift_giver_of_i = -1;
        for (int j = 0; j < n; ++j) {
            if (gift_giver[j] == i + 1) {
                gift_giver_of_i = j + 1;
                break;
            }
        }

        printf("%d ", gift_giver_of_i);
    }

    printf("\n");
    return 0;
}
