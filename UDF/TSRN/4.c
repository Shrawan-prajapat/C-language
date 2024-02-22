#include<stdio.h>

void ok(){
	int a,b;
	
	printf("Enter the number: ");
	scanf("%d",&a);
	printf("Enter the number: ");
	scanf("%d",&b);
  printf("\n%d + %d =%d",a,b,a+b);
  printf("\n%d - %d =%d",a,b,a-b);
  printf("\n%d * %d =%d",a,b,a*b);
  printf("\n%d / %d =%d",a,b,a/b);
}
void main(){
	
	ok();
}
