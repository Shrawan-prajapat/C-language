#include<stdio.h>

main()
{
	int size1,size2,i;
	
	printf("Enter the size of element: ");
	scanf("%d",&size1);
	
	int array_a[size1];
	for(i=0;i<size1;i++){
		printf("array:a[%d]: ",i);
		scanf("%d",&array_a[i]);
	}
		
	
	
		int array_b[size1];
	for(i=0;i<size1;i++){
		printf("array:b[%d]: ",i);
		scanf("%d",&array_b[i]);
	}
	
	
	int array_c[size1];
	for(i=0;i<size1;i++){
		array_c[i]=array_a[i]+array_b[i];
		printf("array:c=  %d",array_c[i]);
		
	}
	
	}
