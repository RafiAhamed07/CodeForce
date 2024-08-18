// https://codeforces.com/problemset/problem/467/A

#include <stdio.h>

int main() {
    int rooms;
    scanf("%d", &rooms);
    int n = 0;

    while (rooms--) {
        int people, capacity;
        scanf("%d %d", &people, &capacity);

        if (capacity - people >= 2) {
            n++;
        }
    }
    
    printf("%d\n", n);

    return 0;
}
