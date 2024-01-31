#include<stdio.h>

main(){
	int a,b,c;
	
	printf("Enter the your first number:");
	scanf("%d",&a);
	
	printf("Enter the your second number :");
	scanf("%d",&b);
	
	printf("Enter the your third number :");
	scanf("%d",&c);
	
	(a>b)?((a>c)?printf("a is max"):printf("c is max")):
	((b>c)?printf("b is max"):printf("c is max"));
}
