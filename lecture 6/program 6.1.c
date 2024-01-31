//Write programme to find maxium in 3 number  
#include<stdio.h>
main(){
	int a,b,c;
	printf("Enter the number a: ");
	scanf("%d",&a);
	printf("Enter the number b: ");
	scanf("%d",&b);
	printf("Enter the number c: ");
	scanf("%d",&c);
	
	if(a>b){
		if(a>c){
			printf("\na is maxium number");
		}
		else{
			printf("\nc is maxium number");
		}
		
	}
	else{
		if(b>c){
			printf("\nb is maxium number");
		}
		else{
			printf("\nc is maxium number");
		}
	}
	
	
	
	
}
