#include <stdio.h>

main(){
	
	int a=5;
	int b=15;
	int sum=a+b;
	int substraction=a-b;
	int multiplication=a*b;
	int division=a/b;
	int modulo=a%b;
	printf("%d +%d= %d",a,b,sum);
	printf("\n%d -%d= %d",a,b,substraction);
	printf("\n%d *%d= %d",a,b,multiplication);
	printf("\n%d /%d= %d",a,b,division);
	printf("\n%d %%%d= %d",a,b,modulo);
}
