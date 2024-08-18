// https://codeforces.com/problemset/problem/271/A
#include <stdio.h>
#include <string.h>

int year(int y) {
    char ys[5];
    sprintf(ys, "%d", y);
    int n = strlen(ys);
    int flag = 1;

    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (ys[i] == ys[j]) {
                flag = 0;
                break;
            }
        }
        if (flag == 0) {
            break;
        }
    }

    return flag;
}

int main() {
    int y;
    scanf("%d", &y);

    while (!year(++y)) {
    }

    printf("%d\n", y);

    return 0;
}
