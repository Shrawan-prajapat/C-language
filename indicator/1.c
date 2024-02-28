#include<stdio.h>

 main(){
	char str[50];
	int legnth, *p;
	
	printf("Enter the number: ");
	scanf("%d",&str);
	
	legnth=strlen(str);
	p= &legnth;
	
	printf("%d\n",*p);
}
