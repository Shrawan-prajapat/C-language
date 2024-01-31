#include<stdio.h>
main(){
	int n;
	printf("Enter your number : ");
	scanf("%d",&n);
	if(n>0){
		printf("\nYour chosen number is positive");
	}
	else if(n<0){
		printf("\nYour chosen number is negative");
	}
	else{
		printf("\nYour chosen number is zero");
	}
}
