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
	
	(a>b)?((a>c)?((a>d)?printf("\na is max"):printf("\nd is max")):printf("\nc is max")):
	((b>c)?((b>d)?printf("\nb is max"):printf("\nd is max")):((c>d)?printf("\nc is max"):printf("\nd is max")));
}
