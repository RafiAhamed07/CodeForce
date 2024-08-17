// https://codeforces.com/problemset/problem/263/A
#include <stdio.h>
#include <math.h>

int main() {
    int matrix[5][5];
    int row, col;

    // Read the input matrix
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            scanf("%d", &matrix[i][j]);
            if (matrix[i][j] == 1) {
                row = i;
                col = j;
            }
        }
    }

    // Calculate the minimum number of moves
    int moves = abs(2 - row) + abs(2 - col);

    printf("%d", moves);

    return 0;
}