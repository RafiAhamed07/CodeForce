// https://codeforces.com/problemset/problem/469/A
#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;
    scanf("%d", &n);

    int p, q, level;
    int *levels = (int *)calloc(n + 1, sizeof(int));

    
    scanf("%d", &p);
    for (int i = 0; i < p; i++) {
        scanf("%d", &level);
        levels[level] = 1; 
    }

    scanf("%d", &q);
    for (int i = 0; i < q; i++) {
        scanf("%d", &level);
        levels[level] = 1; 
    }

    int all_levels_passed = 1;
    for (int i = 1; i <= n; i++) {
        if (levels[i] == 0) {
            all_levels_passed = 0;
            break;
        }
    }

    if (all_levels_passed) {
        printf("I become the guy.\n");
    } else {
        printf("Oh, my keyboard!\n");
    }

    free(levels); 
    return 0;
}
