#include<stdio.h>

main(){
	int bs,hra,ta,da;
	printf("Enter the your basic salary :");
	scanf("%d",&bs);
	printf("Enter the hra :");
	scanf("%d",&hra);
	printf("Enter the da :");
	scanf("%d",&da);
	printf("Enter the ta :");
	scanf("%d",&ta);
	
	bs= bs+(bs*hra/100)+(bs*da/100)+(bs*ta/100);
	
	printf("The gross salary is %d",bs);
	
	
}
