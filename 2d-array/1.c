#include<stdio.h>
void main(){
	int i,j,x,y,sum=0;
	int a[x][y];
	
	printf("Enter the size of rows: ");
	scanf("%d",&x);
	printf("Enter the size of rows: ");
	scanf("%d",&y);
	
	for(i=0;i<x;i++){
	for(j=0;j<y;j++){
			printf("Enter a[%d][%d]: ",i,j);
	scanf("%d",&a[i][j]);
	}
	printf("\n");
	}
	  
	 for(i=0;i<x;i++){
	 	for(j=0;j<y;j++){
	 		
	 			printf("%d",a[i][j]);
	 			sum=sum+a[i][j];
			 
		 }
		 printf("\n");
	 } 
	 printf("Avrage of array elements: %d ",sum/2);
}
