
void setZeroes(int** matrix, int matrixSize, int* matrixColSize) {
    int m = matrixSize;
    int n = matrixColSize[0];

    int i, j;
    int firstRow = 0;
    int firstCol = 0;

    // Check whether the first row contains zero
    for (j = 0; j < n; j++) {
        if (matrix[0][j] == 0) {
            firstRow = 1;
            break;
        }
    }

    // Check whether the first column contains zero
    for (i = 0; i < m; i++) {
        if (matrix[i][0] == 0) {
            firstCol = 1;
            break;
        }
    }

    // Mark rows and columns containing zero
    for (i = 1; i < m; i++) {
        for (j = 1; j < n; j++) {
            if (matrix[i][j] == 0) {
                matrix[i][0] = 0;
                matrix[0][j] = 0;
            }
        }
    }

    // Set marked rows to zero
    for (i = 1; i < m; i++) {
        if (matrix[i][0] == 0) {
            for (j = 1; j < n; j++) {
                matrix[i][j] = 0;
            }
        }
    }

    // Set marked columns to zero
    for (j = 1; j < n; j++) {
        if (matrix[0][j] == 0) {
            for (i = 1; i < m; i++) {
                matrix[i][j] = 0;
            }
        }
    }

    // Set first row to zero if required
    if (firstRow == 1) {
        for (j = 0; j < n; j++) {
            matrix[0][j] = 0;
        }
    }

    // Set first column to zero if required
    if (firstCol == 1) {
        for (i = 0; i < m; i++) {
            matrix[i][0] = 0;
        }
    }
}
