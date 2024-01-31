//Wap to find simple intrest.
#include <stdio.h>

main(){
	
	float p,r,t,ans;
	printf("Enter the value of initial principal balance: ");
	scanf("%f",&p);
	printf("Enter the value of annual interest rate: ");
	scanf("%f",&r);
	printf("Enter the value of time: ");
	scanf("%f",&t);
	ans=(p*r*t)/100;
	printf("The area of tringle is %.2f",ans);
}
