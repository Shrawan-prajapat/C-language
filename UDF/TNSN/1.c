#include<stdio.h>

void Bhupendra_jogi(int num){
	

	if(num%2==0){
		printf("Your given number is even");
		
	}
	else{
		printf("Your given number is odd");
	}
}

void main(){
	int a;
	printf("Enter the number: ");
	scanf("%d",&a);
	
	Bhupendra_jogi(a);
}
