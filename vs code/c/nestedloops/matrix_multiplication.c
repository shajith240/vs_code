#include <stdio.h>

#define MAX_SIZE 100

int main() {
    int A[MAX_SIZE][MAX_SIZE], B[MAX_SIZE][MAX_SIZE], C[MAX_SIZE][MAX_SIZE];
    int R1, C1, R2, C2;

    // Input for first matrix
    printf("Enter the number of rows for Matrix A: ");
    scanf("%d", &R1);
    printf("Enter the number of columns for Matrix A: ");
    scanf("%d", &C1);

    printf("Enter the elements of Matrix A:\n");
    for (int i = 0; i < R1; i++) {
        for (int j = 0; j < C1; j++) {
            printf("A[%d][%d]: ", i + 1, j + 1);
            scanf("%d", &A[i][j]);
        }
    }

    // Input for second matrix
    printf("Enter the number of rows for Matrix B: ");
    scanf("%d", &R2);
    printf("Enter the number of columns for Matrix B: ");
    scanf("%d", &C2);

    // Check if multiplication is possible
    if (C1 != R2) {
        printf("Matrix multiplication is not possible. Number of columns in A must equal number of rows in B.\n");
        return 1;
    }

    printf("Enter the elements of Matrix B:\n");
    for (int i = 0; i < R2; i++) {
        for (int j = 0; j < C2; j++) {
            printf("B[%d][%d]: ", i + 1, j + 1);
            scanf("%d", &B[i][j]);
        }
    }

    // Initialize the product matrix
    for (int i = 0; i < R1; i++) {
        for (int j = 0; j < C2; j++) {
            C[i][j] = 0; // Initialize to 0
        }
    }

    // Matrix multiplication
    for (int i = 0; i < R1; i++) {
        for (int j = 0; j < C2; j++) {
            for (int k = 0; k < C1; k++) {
                C[i][j] += A[i][k] * B[k][j];
            }
        }
    }

    // Print the result
    printf("The resulting matrix C (A * B) is:\n");
    for (int i = 0; i < R1; i++) {
        for (int j = 0; j < C2; j++) {
            printf("%d ", C[i][j]);
        }
        printf("\n");
    }

    return 0;
}
