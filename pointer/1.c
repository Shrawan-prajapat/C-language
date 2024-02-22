#include<stdio.h>

main(){
	int i,size;
	int *ans;
	int a[size];
	
	printf("Enter size of rows:");
	scanf("%d",&size);

	for(i=0;i<size;i++){
		printf("a[%d]:",i);
		scanf("%d",&a[i]);
	}
	ans=&a;
	printf("\nThe values of pointer are: ");
	for(i=0;i<size;i++){
		printf("%d, ",*(ans+i));
	}
	
	printf("\n\nThe squre elements are: ");
	for(i=0;i<size;i++){
		
		printf("%d, ",(*(ans+i))*(*(ans+i)));
	}
	
}
