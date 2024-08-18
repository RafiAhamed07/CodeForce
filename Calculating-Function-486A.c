// https://codeforces.com/problemset/problem/486/A
#include <stdio.h>

long long calculate_f(long long n) {

    return (n % 2 == 0) ? n / 2 : -(n + 1) / 2;
}

int main() {

    long long n;
    scanf("%lld", &n);

    long long result = calculate_f(n);
    printf("%lld\n", result);

    return 0;
}
