#include<stdio.h>

main()
{
	int a,i,sum=0;
	
	printf("Enter the size of elements: ");
	scanf("%d",&a);
	int array[a];
	for(i=0;i<a;i++){
		printf("array[%d]: ",i);
		scanf("%d",&array[i]);
		
	}
		for(i=0;i<a;i++){
	
		printf("%d\n",array[i]);
		sum+=array[i]/a;
	}
		printf("The answer is %d",sum);
	
}
