// https://codeforces.com/problemset/problem/546/A

#include <stdio.h>

int main() {
    int k, n, w;
    scanf("%d %d %d", &k, &n, &w);

    int total_cost = k * (w * (w + 1)) / 2;
    int borrow_amount = total_cost - n;

    if (borrow_amount < 0) {
        borrow_amount = 0;
    }

    printf("%d\n", borrow_amount);

    return 0;
}
