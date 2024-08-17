// https://codeforces.com/problemset/problem/282/A
#include <stdio.h>
#include <string.h>

int main() {
    int n, x = 0;
    char statement[4];  // Increased size to handle "++X" and "--X" with null terminator

    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        scanf("%s", statement);

        if (strcmp(statement, "++X") == 0 || strcmp(statement, "X++") == 0) {
            x++;
        } else if (strcmp(statement, "--X") == 0 || strcmp(statement, "X--") == 0) {
            x--;
        }
    }

    printf("%d", x);

    return 0;
}