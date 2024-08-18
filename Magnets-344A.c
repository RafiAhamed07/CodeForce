// https://codeforces.com/problemset/problem/344/A
#include <stdio.h>
#include <string.h>

int main() {
    int n;
    scanf("%d", &n);

    char magnet[n][3];  // Assuming each magnet is a 2-character string plus null terminator
    for(int i = 0; i < n; i++) {
        scanf("%s", magnet[i]);
    }

    int groups = 1;

    for (int i = 1; i < n; i++) {
        if(strcmp(magnet[i], magnet[i-1]) != 0) {
            groups++;
        }
    }
    
    printf("%d\n", groups);

    return 0;
}
