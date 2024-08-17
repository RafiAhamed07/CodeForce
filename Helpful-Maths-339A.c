// https://codeforces.com/problemset/problem/339/A
#include <stdio.h>
#include <string.h>

int main() {
    char s[101];
    int count[3] = {0, 0, 0};

    scanf("%s", s);


    for (int i = 0; i < strlen(s); i += 2) {
        if (s[i] == '1') count[0]++;
        else if (s[i] == '2') count[1]++;
        else if (s[i] == '3') count[2]++;
    }


    int first = 1;
    for (int i = 0; i < 3; i++) {
        while (count[i] > 0) {
            if (!first) {
                printf("+");
            }
            printf("%d", i + 1);
            first = 0;
            count[i]--;
        }
    }
    printf("\n");

    return 0;
}