#include<stdio.h>

main(){
	int a,b,temp;
	
	printf("Enter the First number: ");
	scanf("%d",&a);
	
	printf("Enter the Second number: ");
	scanf("%d",&b);
	
	printf("\nThe value of first number before swapping: %d",a);
	printf("\nThe value of second number before swapping: %d",b);
	
	temp=*(&a);
	*(&a)=*(&b);
	*(&b)=temp;
	
	printf("\n\nThe value of first number after swapping: %d",a);
	printf("\nThe value of second number after swapping: %d",b);
}
