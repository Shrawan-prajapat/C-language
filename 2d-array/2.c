#include <stdio.h>

void main() {
    int i,j,n,sum;
    
    printf("Enter the size of the square matrix: ");
    scanf("%d", &n);
    
    int matrix[n][n];
    
    printf("Enter the elements of the matrix:\n");
    for ( i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
        	printf("a[%d][%d]: ",i,j);
            scanf("%d", &matrix[i][j]);
        }
    }
    
    printf("Diagonal elements of the matrix are:\n");
    for ( i = 0; i < n; i++) {
        printf("%d ", matrix[i][i]);
          sum =sum+ matrix[i][j];    
    }
    printf("sum is %d",sum);
}
    
