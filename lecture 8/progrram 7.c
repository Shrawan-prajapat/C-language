#include<stdio.h>

main(){
	
	int i,n;
	
	printf("Enter value of i: ");
	scanf("%d",&i);
	printf("Enter value of i: ");
	scanf("%d",&n);

	while(i<=n){
		if(i%4==0){
				printf("%d\t",i);
		}
		
		i++;
	}
}
