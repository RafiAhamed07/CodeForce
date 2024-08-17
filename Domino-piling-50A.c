// https://codeforces.com/problemset/problem/50/A
#include <stdio.h>

int maxDominoes(int M, int N) {
    return (M * N) / 2;
}

int main() {
    int M, N;
    scanf("%d %d", &M, &N);

    int result = maxDominoes(M, N);

    printf("%d", result);

    return 0;
}