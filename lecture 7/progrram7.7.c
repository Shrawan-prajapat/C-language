#include<stdio.h>

main(){
	int a,b,c,d;
	
	printf("Enter the your first number:");
	scanf("%d",&a);
	
	printf("Enter the your second number :");
	scanf("%d",&b);
	
	printf("Enter the your third number :");
	scanf("%d",&c);
	
	printf("Enter the your third number :");
	scanf("%d",&d);
	
	(a<b)?((a<c)?((a<d)?printf("\na is min"):printf("\nd is min")):printf("\nc is min")):
	((b<c)?((b<d)?printf("\nb is min"):printf("\nd is min")):((c<d)?printf("\nc is min"):printf("\nd is min")));
}
