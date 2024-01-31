#include<stdio.h>

main(){
	int a,b,c,d,e;
	
	printf("Enter the your first number:");
	scanf("%d",&a);
	
	printf("Enter the your second number :");
	scanf("%d",&b);
	
	printf("Enter the your third number :");
	scanf("%d",&c);
	
	printf("Enter the your third number :");
	scanf("%d",&d);
	
	printf("Enter the your third number :");
	scanf("%d",&e);
	
	  (a < b) ? ((a < c) ? ((a < d) ? ((a < e) ? printf("\na is min") : printf("\ne is min")) : printf("\nd is min")) : printf("\nc is min")) :
              ((b < c) ? ((b < d) ? ((b < e) ? printf("\nb is min") : printf("\ne is min")) : printf("\nd is min")) : 
              ((c < d) ? ((c < e) ? printf("\nc is min") : printf("\ne is min")) : ((d < e) ? printf("\nd is min") : printf("\ne is min")));

}
