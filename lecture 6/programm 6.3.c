//Write programme to find maximum in 4 number  
#include<stdio.h>
main(){
	int a,b,c,d;
	
	printf("Enter the number a: ");
	scanf("%d",&a);
	
	printf("Enter the number b: ");
	scanf("%d",&b);
	
	printf("Enter the number c: ");
	scanf("%d",&c);
	
	printf("Enter the number d: ");
	scanf("%d",&d);

	if(a>b){
		if(a>c){
		if(a>d){
			printf("\na is max");
		}else{
			printf("\nd is max");
		}	
		}else{
			printf("\nc is max");
		}
	}else{
		if(b>c){
			if(b>d){
					printf("\nb is max");
			}else{
					printf("\nd is max");
			}
		}else{
			if(c>d){
					printf("\nc is max");
			}
			else{
					printf("\nd is max");
			}
		}
	}
	
	
	
}
