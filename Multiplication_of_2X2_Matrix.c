#include <stdio.h>

int main() {
    // Pre-defined 2x2 matrices
    int a[2][2] = {{1, 2}, {3, 4}};
    int b[2][2] = {{5, 6}, {7, 8}};
    int res[2][2] = {0}; // Result matrix initialized to zero

    // Simple nested loops for multiplication
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            for (int k = 0; k < 2; k++) {
                res[i][j] += a[i][k] * b[k][j];
            }
        }
    }

    // Print result
    for (int i = 0; i < 2; i++) {
        printf("%d %d\n", res[i][0], res[i][1]);
    }

    return 0;
}