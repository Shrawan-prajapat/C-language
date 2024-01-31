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
	
	  (a > b)
	   		? 
			   ((a > c) 
			   ? ((a > d)
			   	 ? ((a > e) ? printf("\na is max") : printf("\ne is max")) ):
					 printf("\nd is max")) : printf("\nc is max")) :
	  	
              ((b > c) 
			  ? ((b > d) 
			  ? ((b > e) ? printf("\nb is max") :  printf("\ne is max")) 
			  : printf("\nd is max")) : 
              ((c > d) ? ((c > e) ? printf("\nc is max") : printf("\ne is max")) : ((d > e) ? printf("\nd is max") : printf("\ne is max")));

}
