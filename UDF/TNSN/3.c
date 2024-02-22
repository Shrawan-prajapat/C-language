#include<stdio.h>

void hiroshima(int num){
	int num1=0,num2=1,num3,j;
	

for(j=0;j<=num;j++){
	printf("%d\n",num1);
	num3=num1+num2;
	num1=num2;
	num2=num3;
}
	
}
void main(){
	int a;
	
	printf("Enter the number: ");
	scanf("%d",&a);
	hiroshima(a);
}
