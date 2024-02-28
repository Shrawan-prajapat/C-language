#include<stdio.h>

main(){
	int size,i;
	
	printf("Enter the size of rows: ");
	scanf("%d",&size);
	
	int array[size];
	
	for(i=0;i<size;i++){
		printf("a[%d]: ",i);
		scanf("%d",&array[i]);
	}
	
	for(i=0;i<size/2;i++){
		int temp=array[i];
		array[i]=array[size-1-i];
		array[size-1-i]=temp;
	}
	printf("The Reversed data is: ");
	for(i=0;i<size;i++){
		printf("%d\n",array[i]);
	}
}
