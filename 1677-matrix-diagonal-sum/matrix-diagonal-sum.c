
int diagonalSum(int** mat, int matSize, int* matColSize) {
    int sum = 0;
    int i;
    int n = matSize;

    for (i = 0; i < n; i++) {

        // Primary diagonal
        sum += mat[i][i];

        // Secondary diagonal
        sum += mat[i][n - 1 - i];
    }

    // Subtract the middle element if n is odd
    if (n % 2 == 1) {
        sum -= mat[n / 2][n / 2];
    }

    return sum;
}
