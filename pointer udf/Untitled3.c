#include<stdio.h>

void beyonder(int size,int i,int array[i],int array[size],int temp){
	
	for(i=0;i<size;i++){
		printf("a[%d]: ",i);
		scanf("%d",&array[i]);
	}
	for(i=0;i<size;i++){
		temp=array[i];
		array[i]=array[size-1-i];
		array[size-1-i]=temp;
		
	}
	
	for(i=0;i<size;i++){
		printf("%d",array[i]);
	}
	
}
void main(){
	int i , size , temp;
	printf("Enter the size of rows: ");
	scanf("%d",&size);
	
	beyonder(size,i,int array[i],temp,int array[size]);
}
