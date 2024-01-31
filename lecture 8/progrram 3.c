#include<stdio.h>

main(){
	int i=0,n,sum;

	
	printf("Enter value of Ending number: ");
	scanf("%d",&n);
	
	while(i <= n){
		printf("%d \n",i);
		sum = sum+i;
		i++;
	}
	
	printf("The answer is %d",sum);
}
