// https://codeforces.com/problemset/problem/200/B
#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int totalPercentage = 0;
    for (int i = 0; i < n; ++i) {
        int pi;
        scanf("%d", &pi);
        totalPercentage += pi;
    }

    double averagePercentage = (double)totalPercentage / n;

    printf("%.4lf\n", averagePercentage);

    return 0;
}
