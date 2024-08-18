// https://codeforces.com/problemset/problem/116/A
#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int currentCapacity = 0;
    int maxCapacity = 0;

    for (int i = 0; i < n; ++i) {
        int exitPassengers, enterPassengers;
        scanf("%d %d", &exitPassengers, &enterPassengers);

        currentCapacity = currentCapacity - exitPassengers + enterPassengers;

        if (currentCapacity > maxCapacity) {
            maxCapacity = currentCapacity;
        }
    }

    printf("%d\n", maxCapacity);

    return 0;
}
