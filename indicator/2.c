#include<stdio.h>

main(){
	int row,colm,i,j;
	int array[row][colm];
	printf("Enter the size for row: ");
	scanf("%d",&row);
	
	printf("Enter the size for column: ");
	scanf("%d",&colm);
	
	
	for(i=0;i<row;i++){
		for(j=0;j<colm;j++){
			printf("a[%d][%d]: ",i,j);
			scanf("%d",&array[i][j]);
		}
		
		
	}
	
	int (*p)= array;
	printf("This is:");
	for(i=0;i<row;i++){
		for(j=0;j<colm;j++){
			int cube = *(p + i * colm + j) * *(p + i * colm + j) * *(p + i * colm + j);
            printf("%d ", cube);
		}
		
		
	}
}
