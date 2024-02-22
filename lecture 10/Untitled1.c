#include<stdio.h>

main(){
	
	int i ,j ,k = 1 ,counter=2;
	char ch='A';
	
	for(i = 1; i <= 5; i++){
		
			for(j = 1; j <= i; j++){
				
				if(i % 2 == 0){
				
					if( j % 2 == 0){
						printf("%c ",ch++);
					}
					else{
						printf("%d ",counter++);
					}
				}
					else
					 if( j % 2 == 0)
					{
						printf("%d ",counter++);
					}
					else{
						printf("%c ",ch++);
					}
				}
				printf("\n");
			}		
	}
	
	
	// output :

	// A
	// 2   B
	// c   3   D
	// 4   E   5   F
	// G   6   H   7   I
