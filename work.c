#include <stdio.h>

//Q73: Find the sum of each row of a matrix and store it in an array.

/*
Sample Test Cases:
Input 1:
2 3
1 2 3
4 5 6
Output 1:
6 15

*/

int main() {
    int rows, cols;
    scanf("%d %d", &rows, &cols);
    
    int matrix[rows][cols];
    int rowSums[rows];

    // Read the matrix elements
    for (int i = 0; i < rows; i++) {
        rowSums[i] = 0; // Initialize row sum
        for (int j = 0; j < cols; j++) {
            scanf("%d", &matrix[i][j]);
            rowSums[i] += matrix[i][j]; // Calculate row sum
        }
    }

    // Print the sum of each row
    for (int i = 0; i < rows; i++) {
        printf("%d ", rowSums[i]);
    }
    
    return 0;
}

//Q74: Find the transpose of a matrix.

/*
Sample Test Cases:
Input 1:
2 3
1 2 3
4 5 6
Output 1:
1 4
2 5
3 6

*/

int main() {
    int rows, cols;
    scanf("%d %d", &rows, &cols);
    
    int matrix[rows][cols];
    int transpose[cols][rows];

    // Read the matrix elements
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            scanf("%d", &matrix[i][j]);
            transpose[j][i] = matrix[i][j]; // Calculate transpose
        }
    }

    // Print the transpose of the matrix
    for (int i = 0; i < cols; i++) {
        for (int j = 0; j < rows; j++) {
            printf("%d ", transpose[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}