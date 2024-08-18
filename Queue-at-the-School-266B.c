// https://codeforces.com/problemset/problem/266/B
#include <stdio.h>
#include <string.h>

void swap(char *a, char *b) {
    char temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    int n, t;
    scanf("%d %d", &n, &t);

    char s[n + 1];
    scanf("%s", s);

    for (int i = 0; i < t; i++) {
        for (int j = 0; j < n - 1; j++) {
            if (s[j] == 'B' && s[j + 1] == 'G') {
                swap(&s[j], &s[j + 1]);
                j++; 
            }
        }
    }

    printf("%s\n", s);

    return 0;
}
