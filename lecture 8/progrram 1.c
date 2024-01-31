#include<stdio.h>

main(){
	int i,n;
	printf("Enter value of i: ");
	scanf("%d",&i);
	
	printf("Enter value of n: ");
	scanf("%d",&n);
	
	while(i<=n){
		printf("%d\n",i);
		i++;
	}
}
