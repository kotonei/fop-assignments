#include <stdio.h>

int main() {
    int i, j, k;
    int r1, c1, r2, c2;

    printf("Enter the number of rows of 1st matrix: ");
    scanf("%d", &r1);
    printf("Enter the number of columns of 1st matrix: ");
    scanf("%d", &c1);

    printf("Enter the number of rows of 2nd matrix: ");
    scanf("%d", &r2);
    printf("Enter the number of columns of 2nd matrix: ");
    scanf("%d", &c2);

    int matrixA[r1][c1];
    int matrixB[r2][c2];

    printf("\nEnter the elements of the 1st matrix:\n");
    for (i = 0; i < r1; i++) {
        for (j = 0; j < c1; j++) {
            printf("Element [%d][%d]: ", i, j);
            scanf("%d", &matrixA[i][j]);
        }
    }

    printf("\nEnter the elements of the 2nd matrix (for addition):\n");
    for (i = 0; i < r2; i++) {
        for (j = 0; j < c2; j++) {
            printf("Element [%d][%d]: ", i, j);
            scanf("%d", &matrixB[i][j]);
        }
    }

    // Perform matrix addition (Requires matching dimensions)
    printf("\nMatrix Addition:\n");
    if (r1 == r2 && c1 == c2) {
        int matrixSum[r1][c1];
        for (i = 0; i < r1; i++) {
            for (j = 0; j < c1; j++) {
                matrixSum[i][j] = matrixA[i][j] + matrixB[i][j];
                printf("%d\t", matrixSum[i][j]);
            }
            printf("\n");
        }
    } else {
        printf("Addition cannot be performed, as the dimensions do not match (requires r1==r2 and c1==c2).\n");
    }

    // Check for saddle point in the main matrix
    int has_saddle = 0, saddle_val = 0, saddle_r = 0, saddle_c = 0;

    for (i = 0; i < r1; i++) {
        int min_row = matrixA[i][0];
        int col_index = 0;
        
        // Find minimum in the row
        for (j = 1; j < c1; j++) {
            if (matrixA[i][j] < min_row) {
                min_row = matrixA[i][j];
                col_index = j;
            }
        }
        
        // Check if it is the maximum in its column
        int is_max_col = 1;
        for (k = 0; k < r1; k++) {
            if (matrixA[k][col_index] > min_row) {
                is_max_col = 0;
                break;
            }
        }
        
        if (is_max_col == 1) {
            has_saddle = 1;
            saddle_val = min_row;
            saddle_r = i;
            saddle_c = col_index;
        }
    }

    //Find inverse (if determinant != 0)
    int is_square = (r1 == c1);
    int is_singular = 0;
    
    // Dynamic sizing based on inputted square matrix, using float because division may result in decimal values
    float augmented[r1][2 * c1]; 

    if (is_square) {
        int n = r1;
        // Setup augmented matrix [A | I]
        for (i = 0; i < n; i++) {
            for (j = 0; j < n; j++) {
                augmented[i][j] = matrixA[i][j];
            }
            for (j = n; j < 2 * n; j++) {
                if (i == (j - n)) {
                    augmented[i][j] = 1.0;
                } else {
                    augmented[i][j] = 0.0;
                }
            }
        }

        // Row operations
        for (i = 0; i < n; i++) {
            if (augmented[i][i] == 0.0) {
                is_singular = 1; // Pivot is 0, determinant is 0
                break; 
            }
            
            float pivot = augmented[i][i];
            for (j = 0; j < 2 * n; j++) {
                augmented[i][j] = augmented[i][j] / pivot;
            }
            
            for (k = 0; k < n; k++) {
                if (k != i) {
                    float factor = augmented[k][i];
                    for (j = 0; j < 2 * n; j++) {
                        augmented[k][j] = augmented[k][j] - (factor * augmented[i][j]);
                    }
                }
            }
        }
    }

    // Check whether the matrix is a magic square
    int is_magic = 0;
    int magic_sum = 0;

    if (is_square) {
        is_magic = 1; // Assume true until proven false
        int n = r1;
        
        // Get sum of the first diagonal
        for (i = 0; i < n; i++) {
            magic_sum = magic_sum + matrixA[i][i];
        }

        // Check second diagonal
        int diag2 = 0;
        for (i = 0; i < n; i++) {
            diag2 = diag2 + matrixA[i][n - 1 - i];
        }

        if (diag2 != magic_sum) {
            is_magic = 0;
        }

        // Check rows and columns
        for (i = 0; i < n; i++) {
            int row_sum = 0;
            int col_sum = 0;
            for (j = 0; j < n; j++) {
                row_sum = row_sum + matrixA[i][j];
                col_sum = col_sum + matrixA[j][i];
            }
            if (row_sum != magic_sum || col_sum != magic_sum) {
                is_magic = 0;
            }
        }
    }

    // Results
    printf("\nSaddle Point:\n");
    if (has_saddle == 1) {
        printf("Saddle Point found at [%d][%d] with value: %d\n", saddle_r, saddle_c, saddle_val);
    } else {
        printf("No Saddle Point found in the main matrix.\n");
    }

    printf("\nMatrix Inverse:\n");
    if (!is_square) {
        printf("Matrix is not square. Inverse cannot be found.\n");
    } else if (is_singular == 1) {
        printf("Determinant is 0. Matrix is singular, so no inverse exists.\n");
    } else {
        for (i = 0; i < r1; i++) {
            for (j = r1; j < 2 * r1; j++) {
                printf("%.2f\t", augmented[i][j]);
            }
            printf("\n");
        }
    }

    printf("\nMagic Square:\n");
    if (!is_square) {
        printf("Matrix is not square, so it cannot be a magic square.\n");
    } else if (is_magic == 1) {
        printf("The main matrix is a magic square. The Magic Sum is = %d\n", magic_sum);
    } else {
        printf("The main matrix is not a magic square.\n");
    }

    return 0;
}