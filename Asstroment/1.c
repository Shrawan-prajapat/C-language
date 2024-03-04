#include<stdio.h>

main(){
	int i,j,row,col;
	int array[row];
	
	printf("Enter the size for rows: ");
	scanf("%d",&row);
	
	
	
	for(i=0;i<=row;i++){
			printf("a[%d]: ",i);
			scanf("%d",&array[i]);
	}
	printf("The Negative numbers are: ");
	for(i=0;i<=row;i++){
			if(array[i]<0){
				printf("%d\t",array[i]);
			}
			
	}
	

}
