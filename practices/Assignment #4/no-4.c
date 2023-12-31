#include <stdio.h>
#include <stdlib.h>

int main() {
    int i, j, r1, c1, r2, c2;


    printf("Enter row and column numbers for the first matrix >>> ");
    scanf("%d %d", &r1, &c1);

    printf("Enter row and column numbers for the second matrix >>> ");
    scanf("%d %d", &r2, &c2);

    // Check if multiplication is possible
    if (c1 != r2) {
        printf("Multiplication doesn't exist\n");
        exit(EXIT_FAILURE);
    }

    int mat1[r1][c1], mat2[r2][c2], result[r1][c2];

    // Input elements for the first matrix
    printf("Enter elements for the first matrix:\n");
    for (i = 0; i < r1; i++) {
        for (j = 0; j < c1; j++) {
            printf("mat1[%d][%d] = ", i + 1, j + 1);
            scanf("%d", &mat1[i][j]);
        }
    }

    // Input elements for the second matrix
    printf("Enter elements for the second matrix:\n");
    for (i = 0; i < r2; i++) {
        for (j = 0; j < c2; j++) {
            printf("mat2[%d][%d] = ", i + 1, j + 1);
            scanf("%d", &mat2[i][j]);
        }
    }

    // Matrix multiplication
    for (i = 0; i < r1; i++) {
        for (j = 0; j < c2; j++) {
            result[i][j] = 0;
            for (int k = 0; k < c1; k++) {
                result[i][j] += mat1[i][k] * mat2[k][j];
            }
        }
    }

    // Display the result
    printf("\nResult of matrix multiplication:\n");
    for (i = 0; i < r1; i++) {
        for (j = 0; j < c2; j++) {
            printf("%d\t", result[i][j]);
        }
        printf("\n");
    }

    return 0;
}
