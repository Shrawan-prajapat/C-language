#include <stdio.h>

void main() {
    int i,j,n;
    
    printf("Enter the size of the square matrix: ");
    scanf("%d", &n);
    
    int matrix[n][n];
    
    printf("Enter the elements of the matrix:\n");
    for ( i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }
    
    printf("Diagonal elements of the matrix are:\n");
    for ( i = 0; i < n; i++) {
        printf("%d ", matrix[i][i]);
    }
}
    
