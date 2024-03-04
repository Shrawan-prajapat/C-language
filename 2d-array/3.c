#include<stdio.h>

main(){
	int row,cols,i,j;
	
	int a[row][cols];
	int b[row][cols];
	int c[row][cols];
	
	printf("Enter the size for rows: ");
	scanf("%d",&row);
	
	printf("Enter the size for column: ");
	scanf("%d",&cols);
	
	for(i=0;i<row;i++){
		for(j=0;j<cols;j++){
			printf("a[%d][%d]: ",i,j);
			scanf("%d",&a[i][j]);
		}
	}
	printf("-------------------\n");
	for(i=0;i<row;i++){
		for(j=0;j<cols;j++){
			printf("b[%d][%d]: ",i,j);
			scanf("%d",&b[i][j]);
		}
	}
	
	printf("The array c is: ");
	
	for(i=0;i<row;i++){
		for(j=0;j<cols;j++){
			c[i][j]=a[i][j]+b[i][j];
			printf(" %d",c[i][j]);
		}
	}
}
