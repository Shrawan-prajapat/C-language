#include<stdio.h>

void stare(){
	int n,sum,i;
	int array[n];
	
	printf("Enter the number of rows: ");
	scanf("%d",&n);
	
	for(i=0;i<n;i++){
			printf("array[%d]: ",i);
		scanf("%d",&array[i]);
	}
	
		for(i=0;i<n;i++){
	
	
		sum+=array[i];
	
	}
	
	printf("\nthe sum of array is %d.",sum);
}

void main(){
	stare();
}
