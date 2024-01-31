#include<stdio.h>

main(){
	int i,n,sum=0;
	printf("Enter value of Starting number: ");
	scanf("%d",&i);
	
	printf("Enter value of Ending number: ");
	scanf("%d",&n);
	
	while(i >= n){
		printf("%d \n",i);
		sum = sum-i;
		i--;
	}
	
	printf("The answer is %d",sum);
}
