// https://codeforces.com/problemset/problem/677/A
#include <stdio.h>

int main() {
    int n, h, p = 0;
    scanf("%d", &n);
    scanf("%d", &h);

    int a[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);

        if (a[i] > h) {
            p += 2;
        } else {
            p++;
        }
    }

    printf("%d\n", p);

    return 0;
}
