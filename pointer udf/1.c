#include<stdio.h>

void nova(){
	int size,i;
	printf("Enter the size of rows: ");
	scanf("%d",&size);
	
	int array[size];
	
	for(i=0;i<size;i++){
		printf("a[%d]: ",i);
		scanf("%d",&array[i]);
		
	}
	
	for(i=0;i<size;i++){
		int temp=array[i];
		array[i]=array[size-1-i];
		array[size-1-i]=temp;
	}
	printf("The Reversed numbers are: ");
	for(i=0;i<size;i++){
		printf("%d\n",array[i]);
	}
}

void main(){
	nova();
}
